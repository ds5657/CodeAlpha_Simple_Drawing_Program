#include <iostream>

// Function to draw a rectangle
void drawRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Function to draw a right-angled triangle
void drawTriangle(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Function to draw a horizontal line
void drawHorizontalLine(int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;
}

int main() {
    int choice;
    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. Rectangle" << std::endl;
    std::cout << "2. Triangle" << std::endl;
    std::cout << "3. Horizontal Line" << std::endl;
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            int rectWidth, rectHeight;
            std::cout << "Enter rectangle width: ";
            std::cin >> rectWidth;
            std::cout << "Enter rectangle height: ";
            std::cin >> rectHeight;
            drawRectangle(rectWidth, rectHeight);
            break;
        case 2:
            int triHeight;
            std::cout << "Enter triangle height: ";
            std::cin >> triHeight;
            drawTriangle(triHeight);
            break;
        case 3:
            int lineLength;
            std::cout << "Enter line length: ";
            std::cin >> lineLength;
            drawHorizontalLine(lineLength);
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}