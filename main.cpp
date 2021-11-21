#include <iostream>
#include "ChessBoard.h"

/**
 * Checks whether the user input is a number.
 * @param input - user input from console
 * @return true if the input is a number, false otherwise
 */
bool isNumber(const std::string& input) {
    std::string::const_iterator chr = input.begin();
    while (chr != input.end() && std::isdigit(*chr)) ++chr;
    return !input.empty() && chr == input.end();
}

/**
 * Gets the user-inputted chess board size/number of queens from the console.
 * Continues prompting the user until a valid input is entered.
 * (Size input must be a positive number).
 * @return a valid board size (n >= 1).
 */
uint32_t getSizeInput() {
    std::string boardSizeStr;
    std::cout << "Enter the chess board size/number of queens." << std::endl;
    std::cout << "Must be a positive number." << std::endl;
    std:: cout << ">> ";
    std::cin >> boardSizeStr;

    while (!isNumber(boardSizeStr) || std::stoi(boardSizeStr) <= 0) {
        std::cout << "Enter a valid chess board size/number of queens." << std::endl;
        std:: cout << ">> ";
        std::cin >> boardSizeStr;
    }

    return std::stoi(boardSizeStr);
}

int main() {
    ChessBoard board = ChessBoard(getSizeInput());
    if (board.tryQueen(0)) {
        std::cout << board.getNumSolutions() << " Solutions Found." << std::endl;
    }
    else {
        std::cout << "No Solution Found." << std::endl;
    }
}
