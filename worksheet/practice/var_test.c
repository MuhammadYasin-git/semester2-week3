#include <stdio.h>

/*
 * Example using different variable types
 */

int main( void ) {

    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hane of a clock
    unsigned char hour_hand = 18;
    printf("The hour hand points to %hhu o'clock.\n", hour_hand);


    // 2. the total population of a country, eg. China has approximately 1.4billion people
    unsigned long china_pop = 1400000000;
    printf("China has about %lu people.\n", china_pop);


    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    long min_difference = -40000;
    printf("The difference is %ld minutes.\n", min_difference);

    // 4. the mean temperature in Leeds over a one-year period
    float mean_temp = 11.5f;
    printf("The mean temperature in Leeds is %.1f degrees Celsius.\n", mean_temp);

    // 5. a precise GPS location to within 10cm distance
    double latitude  = 53.80075312;
    double longitude = -1.54907183;
    printf("GPS location: %.8f latitude, %.8f longitude.\n", latitude, longitude);


    // 6. a calculation of pi to 12 decimal places 
    double pi = 3.141592653589;
    printf("Pi to 12 decimal places: %.12f\n", pi);


    return 0;
}