/******************************************************************************
 * Copyright (C) 2021  by Nilan Fernando
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.  
 * 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief The C file
 *
 * This contains all the implementation code and the function definitions
 *
 * @author Nilan Fernando
 * @date 11/09/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  // Print the statistics 
  print_statistics(test,SIZE);
  
}

/* Add other Implementation File Code Here */
void print_array(unsigned char arr[],int length){
  
    for(int i=0;i<length;i++){
      printf("%d \n",arr[i]);
    }
  
}

float find_mean(unsigned char arr[],int length){
  int sum = 0;
  for(int i=0;i<length;i++){
    sum = sum + arr[i];
  }
  return sum/length;
}

void sort_array(unsigned char arr[],int length){
  // Declare some local variables to swap
  int temp = 0;
  for(int i = 0;i<length;i++){
    for(int j = 0;j<length - 1;j++){
      if(arr[j] < arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

float find_median(unsigned char arr[],int length){
  float median = 0;
  // Sort the array
  sort_array(arr,length);
   // Even number of elements
  if(length % 2 == 0){
    median = (arr[(length-1)/2] + arr[length/2])/2;
  }
  // Odd number of elements
  else{
    median = arr[length/2];
  }
}

float find_maximum(unsigned char arr[],int length){
  float max = 0;
  for(int i = 0;i < length;i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}

float find_minimum(unsigned char arr[],int length){
  // Initialzing the minimum value as the first element
   float min = arr[0];
  for(int i = 0;i < length;i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;  
}

void print_statistics(unsigned char arr[],int length){
  // Calculate the mean
  float mean = find_mean(arr,length);
  
  // Sort the array
  sort_array(arr,length);
  // Print the sorted array
  printf("The sorted array: \n");
  print_array(arr,length);
  
  //Calculate the median
  float median = find_median(arr,length);

  //Find the maximum 
  float maximum = find_maximum(arr,length);

  //Find the minimum
  float minimum = find_minimum(arr,length);

  printf("The mean : %f,\n The median: %f,\n The maximum value: %f,\n The minimum value: %f\n",mean,median,maximum,minimum);
}



