# Histogram
A statistical counting of pixel values in an image

This project was the first written for my Computer Vision Course. 

*******************************
Algorithm for computeHistogram
*******************************
step 0: open input and output files
step 1: numRows, numCols, minVal, maxVal <-- get from input file
        dynamically allocate the hist array and initialize to 0
step 2: // process the input file from left to right and top to bottom
     p(i,j) <- read from input // you must read one integer at a time
     histogram[p(i,j)]++
step 3: repeat step 2 until the file is empty
step 4: output histogram array to output file // follow the format
given
step 5: close input file and output file
