//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them, but do not change any numeric values.
//However, you can use parentheses(you can add or remove them).Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//
//#include <stdio.h>
//
//int main()
//{
//	int xValue = 3;
//	int yValue = 2;
//	int result = (xValue + yValue * 2 + yValue);
//	int smallResult = xValue + yValue * 4 - xValue);
//	printf("the result is: %d\n", result);
//	printf("the small result is: %d\n", smallResult);
//	return 0;
//}
//
//Expected output
//the result is : 20
//the small result is : 5
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	int xValue = 3;
	int yValue = 2;
	int result = (xValue + yValue) * (2 + yValue);
	int smallResult = (xValue + yValue) * (4 - xValue);
	printf("The result is: %d\n", result);
	printf("The small result is: %d\n", smallResult);
	return 0;
}