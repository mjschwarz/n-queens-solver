# N Queens Problem

### Description

This program provides all solutions to the N Queens Problem, which involves placing N Queens on an NxN chess board
such that no Queen can take another, using recursive backtracking.

### Functionality

- Enter the size of the chess board/the number of queens.

`Note:` There are no solutions to the 2 and 3 Queens Problems.

- All possible solutions along with the number of solutions found will be printed to the console.

### Example Output

![](img/exampleoutput2.png?raw=true "Example Input/Output")

....

....

....

![](img/exampleoutput1.png?raw=true "Example Output")

### GitHub Repository

[Link](https://github.com/mjschwarz/NQueensProblem.git)

### Further Reading on the N Queens Problem

[Link](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

> The eight queens puzzle has 92 distinct solutions. If solutions that differ only by the symmetry operations of rotation 
> and reflection of the board are counted as one, the puzzle has 12 solutions. These are called fundamental solutions; 
> representatives of each are shown below.
> A fundamental solution usually has eight variants (including its original form) obtained by rotating 90, 180, or 270° 
> and then reflecting each of the four rotational variants in a mirror in a fixed position. However, should a solution be 
> equivalent to its own 90° rotation (as happens to one solution with five queens on a 5×5 board), that fundamental 
> solution will have only two variants (itself and its reflection). Should a solution be equivalent to its own 180° 
> rotation (but not to its 90° rotation), it will have four variants (itself and its reflection, its 90° rotation and 
> the reflection of that). If n > 1, it is not possible for a solution to be equivalent to its own reflection because 
> that would require two queens to be facing each other. Of the 12 fundamental solutions to the problem with eight queens 
> on an 8×8 board, exactly one (solution 12 below) is equal to its own 180° rotation, and none is equal to its 90° 
> rotation; thus, the number of distinct solutions is 11×8 + 1×4 = 92.

| n | fundamental | all |
| ----------- | ----------- | ----------- |
| 1 | 1 | 1 |
| 2	| 0	| 0 |
| 3	| 0	| 0 |
| 4	| 1	| 2 |
| 5	| 2	| 10 |
| 6	| 1	| 4 |
| 7	| 6	| 40 |
| 8	| 12 | 92 |
| 9	| 46 | 352 |
| 10 | 92 | 724 |
| 11 | 341 | 2,680 |
| 12 | 1,787 | 14,200 |
| 13 |	9,233 |	73,712 |
| 14 |	45,752 | 365,596 |
| 15 |	285,053 | 2,279,184 |
| 16 |	1,846,955 | 14,772,512 |
| 17 |	11,977,939 | 95,815,104 |
| 18 |	83,263,591 | 666,090,624 |
| 19 |	621,012,754 | 4,968,057,848 |
| 20 |	4,878,666,808 |	39,029,188,884 |
| 21 |	39,333,324,973 | 314,666,222,712 |
| 22 |	336,376,244,042 | 2,691,008,701,644 |
| 23 |	3,029,242,658,210 | 24,233,937,684,440 |
| 24 |	28,439,272,956,934 | 227,514,171,973,736 |
| 25 |	275,986,683,743,434 | 2,207,893,435,808,352 |
| 26 |	2,789,712,466,510,289 |	22,317,699,616,364,044 |
| 27 |	29,363,495,934,315,694 | 234,907,967,154,122,528 |
