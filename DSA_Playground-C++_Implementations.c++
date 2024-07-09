#include <iostream>
#include <vector>
using namespace std;

// Node structure for Singly Linked List
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Singly Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* last_node = head;
        while (last_node->next != nullptr) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

// TreeNode structure for Binary Search Tree
struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : key(val), left(nullptr), right(nullptr) {}
};

// Binary Search Tree class
class BST {
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* node, int key) {
        if (node == nullptr) {
            return new TreeNode(key);
        }
        if (key < node->key) {
            node->left = insert(node->left, key);
        } else {
            node->right = insert(node->right, key);
        }
        return node;
    }

    void inorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->key << " ";
            inorderTraversal(node->right);
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int key) {
        root = insert(root, key);
    }

    void inorderTraversal() {
        inorderTraversal(root);
        cout << endl;
    }
};

// Merge Sort implementation
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> left_half(n1);
    vector<int> right_half(n2);

    for (int i = 0; i < n1; ++i) {
        left_half[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        right_half[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (left_half[i] <= right_half[j]) {
            arr[k++] = left_half[i++];
        } else {
            arr[k++] = right_half[j++];
        }
    }

    while (i < n1) {
        arr[k++] = left_half[i++];
    }

    while (j < n2) {
        arr[k++] = right_half[j++];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    // Example of Singly Linked List
    cout << "Singly Linked List:" << endl;
    LinkedList linkedList;
    linkedList.append(1);
    linkedList.append(2);
    linkedList.append(3);
    linkedList.display();

    // Example of Binary Search Tree
    cout << "\nBinary Search Tree (Inorder Traversal):" << endl;
    BST bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);
    bst.insert(6);
    bst.insert(8);
    bst.inorderTraversal();

    // Example of Merge Sort (sorting an array)
    cout << "\nMerge Sort:" << endl;
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Original array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
