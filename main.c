// Write your full name: YOUR_NAME, write your KU ID: YOUR_ID

#include <stdio.h>
#include <stdlib.h>

#define EMPTY '-'
#define HERBIVORE 'H'
#define CARNIVORE 'C'
#define PLANT 'P'

// Function Prototypes
char** read_map_from_txt(const char* filename, int *width, int *height);
void print_grid(char** grid, int width, int height);
char** create_temp_grid(char** grid, int width, int height);
void cleanup_grid(char** grid, int height);
void simulate(char** grid, int width, int height, int numSteps);


int main(int argc, char **argv) {
    int width, height;
    char *filename = argv[1];
    int numSteps = atoi(argv[2]);
    char **grid = read_map_from_txt(filename, &width, &height);

    printf("Initial Grid:\n");
    print_grid(grid, width, height);
    printf("\n\n");


    simulate(grid, width, height,numSteps);

    
    cleanup_grid(grid, height);

    return 0;
}



char** read_map_from_txt(const char* filename, int *width, int *height) {
    '''
    Reads the map from the file and returns a 2D array of characters.
    '''
    char **grid;
    return grid;
}

void print_grid(char** grid, int width, int height) {
    '''
    Print grid to the console with one extra new line at the end for readability.
    '''
}

void cleanup_grid(char** grid, int height) {
    '''
    Free the memory allocated for the grid.
    '''
}
char** create_temp_grid(char** grid, int width, int height) {
    '''
    Create a temporary grid to store the state of the grid.
    '''
    char **tempGrid;
    return tempGrid;
}



void simulate(char** grid, int width, int height, int numSteps) {  
    '''
    Simulate the grid for numSteps.
    At each step, grow plants, move herbivores, and move carnivores in the order. 
    You are encouraged to write seperate functions for each of these tasks.
    You can copy the grid to a temporary grid and then update the grid for each movement.
    You can write helper functions to use common in the movement of herbivores and carnivores.
    Make sure you print the grid 3 times (after each movement) for each step.
    Make sure you free all the allocated memory. (Valgrind can be useful for this)
    Try to code step by step and clearly understandable which will make both the task easier for you and grading easier for us.
    Good Luck :)
    '''

}
