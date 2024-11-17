/*Jessi is calculating travel allowances based on rank and mode of transport. 



If the rank is 'M' and the mode of transport is 'C' (car), calculate the allowance based on the distance travelled, with each kilometre earning 0.50.
If the mode of transport is 'T' (train), the allowance is a flat rate of 30.00. 


Assist Jessi with a program that prompts for the rank and mode of transport and then outputs the calculated travel allowance.

Input format :
The first line consists of a single character M, representing the rank.

The second line consists of a single character 'C' or 'T' representing the mode of transport.

If the mode of transport is 'C' (car), an additional line is present containing a float value D, representing the distance travelled.

Output format :
The output prints a float value representing the total travel allowance, rounded off to two decimal places.*/

#include <stdio.h>

int main() {
    char rank;
    char mode_of_transport;
    float travel_allowance = 0.0;

    scanf(" %c", &rank);
    scanf(" %c", &mode_of_transport);

    if (rank == 'M') {
        if (mode_of_transport == 'C') {
            float distance;
            scanf("%f", &distance);
            travel_allowance = distance * 0.50;
        } else if (mode_of_transport == 'T') {
            travel_allowance = 30.0;
        } 
    } 

    printf("%.2f", travel_allowance);
    return 0;
}


/*another method*/

#include <stdio.h>

int main() {
    char rank;
    char mode_of_transport;
    float travel_allowance = 0.0;

    // Read rank and mode of transport
    scanf(" %c", &rank);  // Notice the space before %c to avoid newline issues
    scanf(" %c", &mode_of_transport);

    // Check if rank is 'M'
    if (rank == 'M' || rank == 'm') {
        // Handle the different modes of transport using a switch statement
        switch (mode_of_transport) {
            case 'C':  // Car mode
            case 'c':  // Car mode (case insensitive)
                {
                    float distance;
                    scanf("%f", &distance);
                    travel_allowance = distance * 0.50;
                }
                break;
            case 'T':  // Train mode
            case 't':  // Train mode (case insensitive)
                travel_allowance = 30.00;
                break;
            default:  // Invalid mode of transport
                travel_allowance = 0.00;
                break;
        }
    } else {
        // If rank is not 'M' or 'm', no allowance is calculated
        travel_allowance = 0.00;
    }

    // Output the result
    printf("%.2f\n", travel_allowance);
    return 0;
}
