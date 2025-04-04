#include "matrix.hpp"
#include <iostream>
#include <vector>

// implementation of functions declared in matrix.hpp goes here
// function definitions for a class have their names prefixed with
// the class name and "::"

// e.g. for the constructor:

Matrix::Matrix(size_t N) {
  for (int row = 0; row <= size-1; row++){
    std::vector<int> new_row;
    for (int column = 0; column <= size-1; column++){
      new_row.push_back(0);  // adds zero to the end of the column
    }
    the_data.push_back(new_row);
  }
}

Matrix::Matrix(std::vector<std::vector<int>> nums){;
  size = nums.size();
  for (int row = 0; row <= size-1; row++){
    std::vector<int> new_row;
    for (int column = 0; column <= size-1; column++){
      new_row.push_back(nums[row][column]);  // adds individual value to end of column
    }
    the_data.push_back(new_row);
  }
}

void Matrix::print_matrix() const {
    for (int row = 0; row< size-1; row++){
      for (int column = 0; column < size-1; column++){
        std::cout<< the_data[row][column]<< " ";  // prints each value in the column, followed by a space
      }
      std::cout<< "\n";  // makes a new line after everything in the column is printed
    }
}


int Matrix::get_size() const{
  return size;  // Used to still have access to size without making it public
}


