#ifndef CHESSBOARD_H
#define CHESSBOARD_H

/**
 * Enumeration of what it means to be a square.
 */
enum Square: bool {EMPTY = false, QUEEN = true};

/**
 * Represents the chess board upon which the problem is being solved.
 */
class ChessBoard {
public:
    /**
     * Creates and initializes a blank 'size X size' chessboard.
     * @param size
     */
    explicit ChessBoard(uint32_t size);

    /**
     * Frees up the dynamically allocated memory for the board.
     */
    ~ChessBoard() noexcept;

    /**
     * Solves all solution to the N Queens Problem using recursive backtracking.
     * (Includes non-fundamental solutions).
     * @param curCol - current column being considered
     * @return true if any solution was found, false otherwise
     */
    bool tryQueen(uint32_t curCol) noexcept;

    /**
     * Places a queen at the parametrized square coordinates.
     * @param row - row to be placed at
     * @param col - column to be placed at
     */
    void setQueen(uint32_t row, uint32_t col) noexcept;

    /**
     * Removes a queen from the parametrized square coordinates.
     * @param row - row to be removed from
     * @param col - column to be removed from
     */
    void removeQueen(uint32_t row, uint32_t col) noexcept;

    /**
     * Checks whether the queen placed at the parametrized coordinates
     * is a valid placement (whether it can be taken by another queen or not).
     * @param row - row of queen being considered
     * @param col - column of queen being considered
     * @return true if the queen is under attack, false otherwise
     */
    [[nodiscard]] bool isUnderAttack(uint32_t row, uint32_t col) const noexcept;

    /**
     * Empties a squares of the board.
     */
    void clearBoard() noexcept;

    /**
     * Prints the board to the console.
     */
    void displayBoard() const noexcept;

    /**
     * Gets the number of solutions found.
     * @return numSolutions
     */
    [[nodiscard]] uint32_t getNumSolutions() const noexcept;

private:
    /**
     * Size of the chess board (NxN).
     */
    uint32_t N;

    /**
     * Chess board being solved upon.
     */
    Square** board;

    /**
     * Total number of solutions found (includes non-fundamental).
     */
    uint32_t numSolutions;
};

#endif // CHESSBOARD_H
