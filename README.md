# MazeSolver
A maze solving code using the algorithm floodfill and implemented on mms simulator

# **QUESTION STATEMENT:**

- Build a bot to solve a 16 by 16 maze.
- The start cell can be any of the corners.
- The destination cells are the 4 cells in the center.


![Pasted image 20240805192648](https://github.com/user-attachments/assets/803ceb3d-f1b6-4b62-b47c-101dca06be7e)


# Algorithm: Floodfill

## What is Floodfill

- In this algorithm we flood the maze with water starting from the destination points. (Imagine placing 4 minecraft water buckets at the destination cells)
- We mark the water's flow with numbers (based on which block gets filled first) This is called the Manhattan Distance
- Following this the mouse should move in such a way that it follows the path leading to the smallest number.
- If the bot faces a wall on its path to the shorter number in such a way that there are no accessible neighbours with a smaller number, floodfill is run again with the newly known wall data and the manhattan distances are updated.
- NOTE: The bot starts with zero maze data and stores it as it moves.

<iframe width="928" height="522" src="https://www.youtube.com/embed/ktn3C7aXVR0" title="Micromouse 2022 Lecture 6: Floodfill" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>


## My Implementation:

- The bot implements floodfill to get from start to goal
- Upon reaching the goal, bot runs floodfill again from goal to start after inverting the wall data of the matrix.
- Repeat (3 iterations)

# Software Used for Testing: mms_mackorones

- A micromouse simulating software to test algorithms
- GitHub link: https://github.com/mackorone/mms
## Steps to Follow to use the simulator and possible issues:

- Go through the ReadMe documentation on the GitHub page
- Go through the API functions
- Install MingW in C:\\Users
- MAKE SURE YOUR C:::\\Users\\*username* does NOT HAVE A SPACE
- Open QuickStart menu and follow the steps to get started.
- Build command: g++ API.cpp Main.cpp





