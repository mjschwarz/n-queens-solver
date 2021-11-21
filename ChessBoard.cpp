#include <iostream>
#include <vector>
#include "ChessBoard.h"

ChessBoard::ChessBoard(uint32_t size) : N(size), board(new Square* [N]), numSolutions(0) {
    for (uint32_t row = 0; row < N; ++row) {
        board[row] = new Square[N];
    }
    clearBoard();
}

ChessBoard::~ChessBoard() noexcept {
    for (uint32_t row = 0; row < N; ++row) {
        delete[] board[row];
    }
}

bool ChessBoard::tryQueen(uint32_t curCol) noexcept {
    if (curCol >= N) {
        ++numSolutions;
        displayBoard();
        return true;
    }
    bool solution = false;
    for (uint32_t row = 0; row < N; ++row) {
        if (!isUnderAttack(row, curCol)) {
            setQueen(row, curCol);
            solution = (tryQueen(curCol + 1)) || solution;
            removeQueen(row, curCol);
        }
    }
    // no solution found
    return solution;
}

void ChessBoard::setQueen(uint32_t row, uint32_t col) noexcept {
    board[row][col] = QUEEN;
}

void ChessBoard::removeQueen(uint32_t row, uint32_t col) noexcept {
    board[row][col] = EMPTY;
}

bool ChessBoard::isUnderAttack(uint32_t row, uint32_t col) const noexcept {
    // row
    for (uint32_t i = 0; i < col; ++i) {
        if (board[row][i] == QUEEN) return true;
    }
    // upper left diagonal '\'
    for (uint32_t i = row, j = col; i >= 0 && j >= 0 && i < UINT32_MAX && j < UINT32_MAX; --i, --j) {
        if (board[i][j] == QUEEN) return true;
    }
    // lower left diagonal '/'
    for (uint32_t i = row, j = col; i < N && j >= 0 && j < UINT32_MAX; ++i, --j) {
        if (board[i][j] == QUEEN) return true;
    }
    return false;
}

void ChessBoard::clearBoard() noexcept {
    for (uint32_t row = 0; row < N; ++row) {
        for (uint32_t col = 0; col < N; ++col) {
            board[row][col] = EMPTY;
        }
    }
}

void ChessBoard::displayBoard() const noexcept {
    std::string breakLine(N + 3 * (N - 1), '-');
    std::cout << breakLine << std::endl;
    for (uint32_t row = 0; row < N; ++row) {
        for (std::uint32_t col = 0; col < N; ++col) {
            std::cout << board[row][col] << "   ";
        }
        std::cout << std::endl;
    }
    std::cout << breakLine << std::endl;
    std::cout << std::endl;
}

uint32_t ChessBoard::getNumSolutions() const noexcept {
    return numSolutions;
}
