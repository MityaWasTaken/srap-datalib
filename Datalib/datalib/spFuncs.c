// spFuncs file
// mityawastaken
// 5/5/22 - 5/15/22
// functions for statistics and probability

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// calculate the average number of the array
int mean(int arr[], int length) {
    int ret_val = 0;
    for(int i=0; i<length; i++) {
        ret_val += arr[i];
    }
    int ret = ret_val/length;
    return ret;
}
// using mean absolute deviation to check how useful a mean is 
float MADSpreadCheck(int arr[], int leng) {
    float sum = 0;
    for(int i =0; i<leng; i++) {
        sum = sum + abs(arr[i]- mean(arr, leng));
    }
    return sum/leng;
}

// median 
int Cmedian(int arr[], uint8_t length) {
    if(length % 2 == 0) {
         int duplicate_arr[length/2];
        for(uint8_t i=0; i<(length/2)+1; i++) {
            duplicate_arr[i] = arr[i];
        }
        int first = duplicate_arr[(length/2)];
        int second = duplicate_arr[(length/2)-1];
        int mean_arr[2] = {first, second};
        int ret_val = 0;
        for(int i=0; i<length; i++) {
            ret_val += arr[i];
        }
        int ret = ret_val/length;
        return ret;
    } 
    
    else {
        int duplicate_arr[length/2];
        for(uint8_t i=0; i<(length/2)+1; i++) {
            duplicate_arr[i] = arr[i];
        }
        int ret = duplicate_arr[(length/2)];
        return ret;
    }
    return 0;
}

// calculating the mode
int Cmode(int arr[], int n) {
    int number = arr[0];
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i=1; i<n; i++)
    {
        if (arr[i] == number) { 
            ++count;
        }
        else { 
                if (count > countMode) {
                    countMode = count; 
                    mode = number;
                }
            count = 1; 
            number = arr[i];
    }
    }
    return number;
}

// calculating theoretical probability
float Ptp(double subject, double possA) {
    double dec = subject/possA;
    float result = dec * 100;
    return result;
}

// calculating relative frequency 
float Prf(int favourable, int total, int frequency) {
    float almst = favourable*frequency;
    float ret = almst/total;
    return ret;

}
