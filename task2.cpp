#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<string> s;
    queue<string> q;

    // Add tasks
    s.push("Task1");
    s.push("Task2");
    s.push("Task3");
    s.push("Task4");
    s.push("Task5");

    q.push("Task1");
    q.push("Task2");
    q.push("Task3");
    q.push("Task4");
    q.push("Task5");

    // Stack
    cout << "Stack (LIFO) order:\n";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << "\n\nQueue (FIFO) order:\n";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << "\n\nPrinter uses Queue.\n";
    cout << "Printing order: Task1 Task2 Task3 Task4 Task5";

    return 0;
}
