#include <iostream>
#include <queue>
using namespace std;

void createQueues(const std::vector<int>& numbers, std::queue<int>& oddQueue, std::queue<int>& evenQueue)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenQueue.push(numbers[i]);
        }
        else
        {
            oddQueue.push(numbers[i]);
        }
    }
}

void printQueuePointers(const std::queue<int>& q)
{
    std::cout << "Початок черги: " << &(q.front()) << std::endl;
    std::cout << "Кінець черги: " << &(q.back()) << std::endl;
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::queue<int> oddQueue;
    std::queue<int> evenQueue;

    createQueues(numbers, oddQueue, evenQueue);

    std::cout << "Вказівники непарної черги:" << std::endl;
    printQueuePointers(oddQueue);

    std::cout << "Вказівники парної черги:" << std::endl;
    printQueuePointers(evenQueue);

    return 0;
}

