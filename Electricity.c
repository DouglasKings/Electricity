#include <stdio.h> //library function Input and Output character
#include <stdlib.h> //library function  for performing file I/O operations, such as opening, closing, reading, and writing files. The fopen(), fclose(), fread(), and fwrite()


int main(){
    double OldMeterReading = 0 , NewMeterReading = 0, ElectricityRate = 50;

    printf("Enter the old meter reading: \n");
    scanf("%lf", &OldMeterReading);

    printf("Enter the new meter reading: \n");
    scanf("%lf", &NewMeterReading);

    double TotalElectricityBill = ((NewMeterReading - OldMeterReading) * ElectricityRate);

    printf("The old meter reading is : %.1lf \n", OldMeterReading);
    printf("The new meter reading is : %.1lf \n", NewMeterReading);
    printf("The total electricity bill is : %.1lf \n", TotalElectricityBill);

    // double TotalElectricityBill = (float)((NewMeterReading - OldMeterReading) * ElectricityRate); EXPLICIT CONVERSION
    //printf("The total electricity bill is : %.1f \n", TotalElectricityBill);
    
    return 0; //return type for integer
}