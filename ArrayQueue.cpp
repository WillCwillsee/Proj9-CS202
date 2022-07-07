#include "ArrayQueue.hpp"

ArrayQueue::ArrayQueue()
{
    
}

ArrayQueue::ArrayQueue(size_t count, const DataType & value) : m_size(count), m_front(0), m_back(count-1)
{
    DataType m_array[count+1];
    /*for(int i = 0; i < ARRAY_CAPACITY; i++){
        DataType m_array[i](value.m_intVal, value.m_doubleVal);
    }*/
    for(int i = 0; i < count+1; i++){
        m_array[i].m_intVal = value.m_intVal;
        m_array[i].m_doubleVal = value.m_doubleVal;
    }
}

ArrayQueue::ArrayQueue(const ArrayQueue & other) : m_size(other.m_size), m_front(other.m_front), m_back(other.m_back)
{
    for(int i = other.m_front; i < m_back; i++){
        m_array[i].m_intVal = other.m_array[i].m_intVal;
        m_array[i].m_doubleVal = other.m_array[i].m_doubleVal;
    }
}

ArrayQueue::~ArrayQueue()
{
    
}

ArrayQueue & ArrayQueue::operator=(const ArrayQueue & rhs)
{
    this->m_size = rhs.m_size;
    this->m_front = rhs.m_front;
    this->m_back = rhs.m_back;
    for(int i = rhs.m_front; i < rhs.m_back+1; i++){
        this->m_array[i].m_intVal = rhs.m_array[i].m_intVal;
        this->m_array[i].m_doubleVal = rhs.m_array[i].m_doubleVal;
    }
    return *this;
}

DataType & ArrayQueue::front()
{
    return m_array[m_front];
}

const DataType & ArrayQueue::front() const
{
    return m_array[m_front];
}

DataType & ArrayQueue::back()
{
    return m_array[m_back];
}

const DataType & ArrayQueue::back() const
{
    return m_array[m_back];
}

void ArrayQueue::push(const DataType & value)
{
    m_array[m_back].m_intVal = value.m_intVal;
    m_array[m_back].m_doubleVal = value.m_doubleVal;
}

void ArrayQueue::pop()
{
    m_array[m_front].m_intVal = 0;
}


size_t ArrayQueue::size() const
{
    return m_size;
}

bool ArrayQueue::empty() const
{
    if(m_size == 0) return 1;
    else return 0;
}

bool ArrayQueue::full() const
{
    if(m_size < ARRAY_CAPACITY) return 0;
    else return 1;
}

void ArrayQueue::clear()
{
    for (int i = m_front; i < m_size; i++)
    {
        m_array[i].m_intVal = 0;
        m_array[i].m_doubleVal = 0;
    }
}

std::ostream & operator<<(std::ostream & os, const ArrayQueue & arrayQueue)
{
    arrayQueue.serialize(os);
    return os;
}

void ArrayQueue::serialize(std::ostream & os) const
{
    os << "Queue size: " << m_size << std::endl << "Front element: " << m_front << std::endl << "Back element: " << m_back << std::endl;
    for (int i = m_front; i < m_back+1; i++)
    {
        os << "Element " << i << std::endl << "Int Value: " << m_array[i].m_intVal << std::endl << "Double Value: " << m_array[i].m_doubleVal << std::endl;
    }
}
