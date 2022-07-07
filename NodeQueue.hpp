//
//  NodeQueue.hpp
//  
//
//  Created by William Charles on 4/21/20.
//

#ifndef NodeQueue_hpp
#define NodeQueue_hpp
#include "DataType.hpp"
#include <cstdlib>

class Node{
    
    friend class NodeQueue;
    
public:
    Node();
    Node(const DataType & data, Node * next);
    Node(const Node & other);
    DataType & data();
    const DataType & data() const;
    
private:
    Node * m_next;
    DataType m_data;
};

class NodeQueue{
    friend std::ostream & operator<<(std::ostream & os,
                                     const NodeQueue & nodeQueue);
public:
    NodeQueue();
    NodeQueue(size_t size, const DataType & value);
    NodeQueue(const NodeQueue & other);
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
private:
    Node * m_front;
    Node * m_back;
};

/*class NodeList{
    friend std::ostream & operator<<(std::ostream & os,      //(i)
                                     const NodeList & nodeList);
public:
    NodeList();                                              //(1)
    NodeList(size_t count, const DataType & value);          //(2)
    NodeList(const NodeList & other);                      //(3)
    ~NodeList();                                             //(4)
    
    NodeList & operator= (const NodeList & rhs);          //(5)
    
    Node * front();                                          //(6)
    Node * back();                                          //(7)
    
    Node * find(const DataType & target,                  //(8)
                Node * & previous,
                const Node * after = nullptr);
    
    Node * insertAfter(Node * target,                      //(9)
                       const DataType & value);
    Node * insertBefore(Node * target,                      //(10)
                        const DataType & value);
    Node * erase(Node * target);                           //(11)
    
    
    DataType & operator[] (size_t position);              //(12a)
    const DataType & operator[] (size_t position) const;  //(12b)
    
    size_t size() const;                                  //(13)
    bool empty() const;                                      //(14)
    void clear();                                          //(15)
    
private:
    Node * m_head;
};*/
#endif /* NodeQueue_hpp */
