#include <stdio.h>


/*
 * Potrfolio submission
 * Name:
 * ID:
 */

int main( void ) {

    // define and initialise variables for the problem data 
    const double TAX_FREE_ALLOWANCE = 12500.0;

    double salary = 36250.0;          // gross salary in £
    double ni_rate_percent = 8.0;     // NI rate in %
    double tax_rate_percent = 15.0;   // tax rate in %

    double ni_contribution;
    double salary_after_ni;
    double taxable_income;
    double tax_contribution;
    double take_home_salary;

    // calculate the deductions and final take-home salary

    // NI is taken as a percentage of the whole salary
    ni_contribution = salary * (ni_rate_percent / 100.0);

    // salary after NI
    salary_after_ni = salary - ni_contribution;

    // tax only on amount above the allowance after NI
    taxable_income = salary_after_ni - TAX_FREE_ALLOWANCE;
    if (taxable_income < 0.0) {
        taxable_income = 0.0;
    }

    // tax contribution
    tax_contribution = taxable_income * (tax_rate_percent / 100.0);

    // final take-home salary
    take_home_salary = salary_after_ni - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}
