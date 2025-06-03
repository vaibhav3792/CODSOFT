#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Task information
struct Task {
    string description;
    bool completed;

    Task(string desc) {
        description = desc;
        completed = false;
    }
};


void showMenu() {
    cout << "\n=== TO-DO LIST MENU ===" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    vector<Task> todoList;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            // Add Task
            string taskDesc;
            cout << "Enter task description: ";
            getline(cin, taskDesc);
            todoList.push_back(Task(taskDesc));
            cout << "Task added successfully." << endl;

        } else if (choice == 2) {
            // View Tasks
            if (todoList.empty()) {
                cout << "No tasks in the list." << endl;
            } else {
                cout << "\nYour To-Do List:" << endl;
                for (size_t i = 0; i < todoList.size(); ++i) {
                    cout << i + 1 << ". [" 
                         << (todoList[i].completed ? "✓" : " ") 
                         << "] " << todoList[i].description << endl;
                }
            }

        } else if (choice == 3) {
            // Mark Task as Completed
            int index;
            cout << "Enter task number to mark as completed: ";
            cin >> index;

            if (index >= 1 && index <= todoList.size()) {
                todoList[index - 1].completed = true;
                cout << "Task marked as completed." << endl;
            } else {
                cout << "Invalid task number." << endl;
            }

        } else if (choice == 4) {
            // Remove Task
            int index;
            cout << "Enter task number to remove: ";
            cin >> index;

            if (index >= 1 && index <= todoList.size()) {
                todoList.erase(todoList.begin() + index - 1);
                cout << "Task removed." << endl;
            } else {
                cout << "Invalid task number." << endl;
            }

        } else if (choice == 5) {
            // Exit
            cout << "Exiting To-Do List Manager. Goodbye!" << endl;
            break;

        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
