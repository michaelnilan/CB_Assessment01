/******************************************************************************
 * Copyright (C) 2021  by Nilan Fernando
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.  
 *
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief The header file
 *
 * This contains all the function declerations
 *
 * @author Nilan Fernando
 * @date 11/09/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the array
 *
 * This function accepts two inputs namely, the array and its length as integer and prints the elements of the array line by  line.
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return This function prints the array to the screen
 */
void print_array(unsigned char arr[],int length);

/**
 * @brief Calculates the mean
 *
 * This function accepts two inputs namely, the array and its length as integer and calculates the mean of the array elements by dividing the sum of elements by its length
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return It returns the mean of the array elements
 */
float find_mean(unsigned char arr[],int length);

/**
 * @brief Sorts the array
 *
 * This function accepts two inputs namely, the array and its length as integer and sorts the elements in the descending order
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return This function sorts the array
 */
void sort_array(unsigned char arr[],int length);

/**
 * @brief Calculates the median
 *
 * This function accepts two inputs namely, the array and its length as integer and calculates the median of the sorted array using the sort_array()
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return It returns the median of the array elements
 */
float find_median(unsigned char arr[],int length);

/**
 * @brief Calculates the maximum 
 *
 * This function accepts two inputs namely, the array and its length as integer and calculates the maximum value of the array
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return It returns the maximum value of the array
 */
float find_maximum(unsigned char arr[],int length);

/**
 * @brief Calculates the minimum
 *
 * This function accepts two inputs namely, the array and its length as integer and calculates the minimum value of the array
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return It returns the minimum value of the array
 */
float find_minimum(unsigned char arr[],int length);

/**
 * @brief Prints statistics
 *
 * This function accepts two inputs namely, the array and its length as integer and prints all the statistics: mean,median,maximum and minimum values. This function calls the previously developed funtions locally to calculate these statistics and print them on screen
 *
 * @param arr[] This is of unsigned char type which is the array to be printed
 * @param length This is the length of the array of int type
 *
 * @return This function prints the statistics to the screen.
 */
void print_statistics(unsigned char arr[],int length);

#endif /* __STATS_H__ */
