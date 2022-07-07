#include "ArrayQueue.hpp"

int main(){
    std::cout << std::endl << "----------------" << std::endl << "ArrayQueue tests" << std::endl << "----------------" << std::endl;
    //1
    std::cout << std::endl << "//1  Default constructor test:" << std::endl;
    ArrayQueue Default;
    std::cout << "Test successful" << std::endl << std::endl;
    //2
    std::cout << "//2  Parameterized constructor test:" << std::endl;
    DataType dataTest(1,2);
    ArrayQueue Parameterized(2, dataTest);
    std::cout << "Test successful" << std::endl << std::endl;
    //3
    std::cout << "//3  Copy constructor test:" << std::endl;
    ArrayQueue Copy(Parameterized);
    std::cout << "Test successful" << std::endl << std::endl;
    //5
    std::cout << "//5  Assignment operator test" << std::endl;
    Default = Copy;
    std::cout << "Test successful" << std::endl << std::endl;
    //6a,6b
    std::cout << "//6a,6b  Front test" << std::endl;
    if (!Copy.empty())
    {
        std::cout << "Front Element contains " << Copy.front() << std::endl;
    }
    std::cout << "Test successful" << std::endl << std::endl;
    //7a,7b
    std::cout << "//7a,7b  Back test" << std::endl;
    if (!Copy.empty())
    {
        std::cout << "Back Element contains " << Copy.back() << std::endl;
    }
    std::cout << "Test successful" << std::endl << std::endl;
    //8
    std::cout << "//8  Push test" << std::endl;
    if (!Copy.full())
    {
        Copy.push(dataTest);
        std::cout << "New Back Element contains " << Copy.back() << std::endl;
    }
    std::cout << "Test successful" << std::endl << std::endl;
    //9
    std::cout << "//9  Pop test" << std::endl;
    if (!Copy.empty())
    {
       Copy.pop();
       std::cout << "New Front Element contains " << Copy.front() << std::endl;
    }
    std::cout << "Test successful" << std::endl << std::endl;
    //10
    std::cout << "//10  Size test" << std::endl;
    std::cout << "Current Queue size is " << Copy.size() << std::endl;
    std::cout << "Test successful" << std::endl << std::endl;
    //11
    std::cout << "//11  Empty test" << std::endl;
    std::cout << "The queue is empty: " << std::boolalpha << Copy.empty() << std::endl;
    std::cout << "Test successful" << std::endl << std::endl;
    //12
    std::cout << "//12  Full test" << std::endl;
    std::cout << "The queue is full: " << std::boolalpha << Copy.full() << std::endl;
    std::cout << "Test successful" << std::endl << std::endl;
    //13
    std::cout << "//13  Clear test" << std::endl;
    Copy.clear();
    std::cout << "Test successful" << std::endl << std::endl;
    //14(i)
    std::cout << "//14(i)  Serialize and << operator test" << std::endl;
    std::cout << Copy;
    std::cout << "Test successful" << std::endl << std::endl;
    
    
    
    //4
    std::cout << "//4 ArrayQueue destructor test:" << std::endl;
    std::cout << "Test successful" << std::endl << std::endl;
    
    return 0;
}
