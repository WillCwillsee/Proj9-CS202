#include "NodeQueue.hpp"

//Node Initialization

Node::Node() : m_next(nullptr)
{

}

Node::Node(const DataType & data, Node * next = nullptr) : m_next(next), m_data(data)
{
    
}

Node::Node(const Node & other) : m_next(other.m_next), m_data(other.m_data)
{
    
}

DataType & Node::data()
{
    return m_data;
}

const DataType & Node::data() const
{
    return m_data;
}

//NodeQueue Initialization
std::ostream & operator<<(std::ostream & os, const NodeQueue & nodeQueue)
{
   // nodeQueue.serialize(os);
    return os;
}


NodeQueue::NodeQueue() : m_front(nullptr), m_back(nullptr)
{
    
}

NodeQueue::NodeQueue(size_t size, const DataType & value) : m_front(nullptr), m_back(nullptr)
{
    m_front->m_data = value;
    for ( int i = 0; i < size; i++)
    {
        
    }
   /* for (Node * curr = m_front; curr!=nullptr; curr = curr->m_next){
        
    } */
}
   /* NodeQueue(const NodeQueue & other);
    ~NodeQueue();
    NodeQueue& operator= (const NodeQueue & rhs);
    DataType & front();
    const DataType & front() const;
    DataType & back();
    const DataType & back() const;
    void push(const DataType & value);
    void pop();
    size_t size() const;
    bool empty() const;
    bool full() const;
    void clear();
    void serialize(std::ostream & os) const;
    Node * m_front;
    Node * m_back;
*/
