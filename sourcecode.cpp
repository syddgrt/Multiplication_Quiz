#include<iostream> //Standard input-output
#include<iomanip> //To manipulate how outputs are displayed-setw()
#include<ctime> //Manipulate time
#include<cstdlib> //To allow use of rand function 

using namespace std; //Allow use of std namespace

int main()
{

	float choice,choiceFinal,learn1,learn2; // Variable declaration float
	int i, j, k; // Variable declaration int
	cout << "\t\t\t----------This program is 10x10 multiplication table!----------\t\t\n\n";  //
	cout << "\t---------------------------------------------------------------------------------------------------------\n"; //
	cout << "\t| What is multiplication table? Well, multiplication table can be defined as a mathematical table that\t|\n "; //
	cout << "\t| defines the values of a product or multiplication operation of certain types of values typically\t| \n "; //
	cout << "\t| from 2 numbers ranging from 1-9 for an algebraic system.\t\t\t\t\t\t|"; //
	cout << "\t\t\t---------------------------------------------------------------------------------------------------------"; // User interface (lines 13-18)
	 
		do // Do-while loop
		{
			cout << "\n\nThis program has 3 options to choose from" << endl; // Prompts the user to choose
			cout << "1.Learn a times tables of your choice!" << endl; //
			cout << "2.Display 10 times tables" << endl; //
			cout << "3.Test your multiplication skills!" << endl; // 
			cout << "4.Exit program\n\n"; // Choice (lines 23-26)
			cout << "Your choice is "; // Prompts the user to input choice

			cin >> choice; // Input choice
			while (choice != 1 && choice != 2 && choice != 3 && choice != 4) // While loop statement, Loop if choice entered not 1,2,3 or 4
			{
				cout << "Error input is invalid! Please re-input your choice..." << endl; // Display error message
				cin >> choice; // Re-input choice
			}
			cout << "\n"; // Linespace


			if (choice == 1) //selection structure - execute if true
			{
				cout << "\nWhat times tables would you like to learn?" << endl; // Ask user what time tables to learn
				cin >> learn1; // Input what number to learn its timetable
				cout << "The times table u would like to learn is " << learn1 << endl; // Prompts the user to input choice
				cout << "How many index of timetables " << learn1 << " would you like to generate?" << endl; // Prompts the user to input the index of the timetable
				cin >> learn2; //Input the index to learn its timetable

				for (i = learn1; i <= learn1; i++) // For loop  to generate timetable
				{
					for (j = 0; j <= learn2; j++) // For loop to generate timetable
					{
						cout << i << " X " << j << " = " << i * j << endl; //For loop to generate timetable
					}

				}
				cout << "Do you still wish to continue using our program?..." << endl; // Ask the user wether want to continue or exit program
				cout << "1. Yes" << endl; // 1. Exit program - Exit loop
				cout << "2. No" << endl; // 2. Stay on the program - Loop the loop

				cout << "Your choice is : "; // Prompts the user to input your choice
				cin >> choiceFinal; // Input the choice
				while (choiceFinal != 1 && choiceFinal != 2 ) // While loop, if choiceFinal not 1 or 2 
				{
					cout << "Error input is invalid! Please re-input your choice..." << endl; // Display error message, prompt user to re-input
					cin >> choiceFinal; // Input the choice
				}
			}

			else if (choice == 2) // Selection structure - execute if true
			{
				for (i = 1; i <= 10; i++) // For loop to generate timetable
				{
					for (j = 1; j <= 10; j++) // For loop to generate timetable
					{
						cout << setw(3) << i * j << "     "; // For loop to generate timetable
					}
					cout << "\n\n"; // linespace
				}

				cout << "Do you still wish to continue using our program?..." << endl; // Ask the user wether to continue or exit
				cout << "1. Yes" << endl; // 1. Exit program - Exit loop
				cout << "2. No" << endl; // 2. Stay on the program - Loop the loop

				cout << "Your choice is : "; //Prompts the user to input your choice
				cin >> choiceFinal; // Input the choice
				while (choiceFinal != 1 && choiceFinal != 2) // While loop, loop if choiceFinal not 1 or 2
				{
					cout << "Error input is invalid! Please re-input your choice..." << endl;  // Display error message, prompt user to re-input
					cin >> choiceFinal; // Input the choice
				}
			}

			else if (choice == 3) // selection structure - execute if true

			{
				int questionChoice; // Declare variable
				cout << "There are 4 sets of question..." << endl; // 
				cout << "1.Beginner" << endl; // 
				cout << "2.Easy" << endl; // 
				cout << "3.Medium" << endl; // 
				cout << "4.Hard (Will include 3 elements)" << endl; // 
				cout << "5.Random" << endl; // Choice
				cout << "Your choice is : "; // Prompts the user to enter choice

				int maxNum1 = 0; // 
				int maxNum2 = 0; // 
				int minNum1 = 0; //
				int minNum2 = 0; // Declare variable
				int maxNum3 = 0; //
				int minNum3 = 0; //
				do // Do - While loop
				{
					
					cin >> questionChoice; // Input choice
					if (questionChoice == 1) // selection structure - execute if true
					{
						maxNum1 = 3; // Maximum value
						maxNum2 = 3; // Maximum value
						minNum1 = 1; // Minimum value
						minNum2 = 1; // Minimum value
						//Assign variable to value
					}
					else if (questionChoice == 2) // selection structure - execute if true
					{
						maxNum1 = 5; // Maximum value
						maxNum2 = 5; // Maximum value
						minNum1 = 1; // Minimum value
						minNum2 = 1; // Minimum value
						//Assign variable to value
					}
					else if(questionChoice==3) // selection structure - execute if true
					{
						maxNum1 = 7; // Maximum value
						maxNum2 = 7; // Maximum value
						minNum1 = 3; // Minimum value
						minNum2 = 3; // Minimum value
						//Assign variable to value
					}
					else if (questionChoice == 4) // selection structure - execute if true
					{
						maxNum1 = 10; // Maximum value
						maxNum2 = 10; // Maximum value
						maxNum3 = 10; // Maximum value
						minNum1 = 5; // Minimum value
						minNum2 = 5; // Minimum value
						minNum3 = 5; // Minimum value
						//Assign variable to value
					}
					else if (questionChoice == 5) // selection structure - execute if true
					{
						maxNum1 = 10; // Maximum value
						maxNum2 = 10; // Maximum value
						minNum1 = 0; // Minimum value
						minNum2 = 0; // Minimum value
						//Assign variable to value
					}
					else
						cout << "Error input is invalid! Please re-input your choice..." << endl;  // Display error message, prompt user to re-input
				} while (questionChoice != 1 && questionChoice != 2 && questionChoice != 3 && questionChoice !=4 && questionChoice!=5); // While loop, loop if questionChoice not 1,2,3 and 4
				
				int randomNum1, randomNum2,randomNum3; // Declare variable
				int answer, realAnswer; // Declare variable
				float totalScore = 0; // Declare and initialize float variable
				int score = 5; // Declare and initialize variable
				float Percentage; // Declare variable
				
				for (j = 1; j <= 5; j++) // For loop
				{
				
					if (questionChoice == 4)
					{
						int realmaxNum1 = maxNum1; // Assign maxNum1 to realmaxNum1 
						int	realmaxNum2 = maxNum2; // Assign maxNum2 to realmaxNum2 
						int realmaxNum3 = maxNum3; // Assign maxNum3 to realmaxNum3
						int realminNum1 = minNum1; // Assign minNum1 to realminNum1
						int realminNum2 = minNum2; // Assign minNum2 to realminNum2 
						int realminNum3 = minNum3; // Assign maxNum3 to realmaxNum3
						
						randomNum1 = (rand() % (realmaxNum1 - realminNum1 + 1)) + realminNum1; // Generate random number function for first number
						randomNum2 = (rand() % (realmaxNum2 - realminNum2 + 1)) + realminNum2; // Generate random number function for second number
						randomNum3 = (rand() % (realmaxNum3 - realminNum3 + 1)) + realminNum3; // Generate random number function for second number

						cout << "\t\t\t\t\t--------------------------\n"; // Aesthetic
						cout << "\t\t\t\t\t|\tQUESTION " << j << "\t |" << endl; //  Display question number
						cout << "\t\t\t\t\t|" << j << " .    " << randomNum1 << " X " << randomNum2 << " X " << randomNum3 <<"\t | " << endl; // Display multiplication elements
						cout << "\t\t\t\t\t--------------------------\n"; // Aesthetic
						cout << "The answer is: "; // Prompts the user to input answer


						cin >> answer; // Input answer
						cout << "\n"; // Linespace

						realAnswer = randomNum1 * randomNum2 * randomNum3; // Operation to get the answer of each question
						if (answer == realAnswer) // Selection structure, execute if User's input answer entered is same as the question answer
						{
							cout << realAnswer << " IS CORRECT! 5 MARKS! " << endl; // Display the answer and correctness of stream
							cout << "\nNext Question!\n"; // NEXT QUESTION!!!
							totalScore = totalScore + 5; // Update total score everytime user get answer's right
						}

						else
						{
							cout << "WRONG!!!\n"; // WRONG!!!
							cout << "THE CORRECT ANSWER IS " << realAnswer; // Display the real correct answer
							cout << "\n\n"; // Linespace
						}

					}
					else
					{
						int realmaxNum1 = maxNum1; // Assign maxNum1 to realmaxNum1 
						int	realmaxNum2 = maxNum2; // Assign maxNum2 to realmaxNum2 
						int realminNum1 = minNum1; // Assign minNum1 to realminNum1
						int realminNum2 = minNum2; // Assign minNum2 to realminNum2 
						randomNum1 = (rand() % (realmaxNum1 - realminNum1 + 1)) + realminNum1; // Generate random number function for first number
						randomNum2 = (rand() % (realmaxNum2 - realminNum2 + 1)) + realminNum2; // Generate random number function for second number

						cout << "\t\t\t\t\t--------------------------\n"; // Aesthetic
						cout << "\t\t\t\t\t|\tQUESTION " << j << "\t |" << endl; // Display question number
						cout << "\t\t\t\t\t|" << j << " .    " << randomNum1 << " X " << randomNum2 << "\t\t |" << endl; // Display operation
						cout << "\t\t\t\t\t--------------------------\n"; // Aesthetic
						cout << "The answer is: "; // Prompt the user to enter the answer

						cin >> answer; // Input answer
						cout << "\n"; // Linespace

						realAnswer = randomNum1 * randomNum2; // Operation to get the answer of each question
						if (answer == realAnswer) // Selection structure, execute if User's input answer entered is same as the question answer
						{
							cout << realAnswer << " IS CORRECT! 5 MARKS! " << endl; // Display the answer and correctness of stream
							cout << "\nNext Question!\n"; // NEXT QUESTION!!!
							totalScore = totalScore + 5; // Operation to compute final score
						}

						else
						{
							cout << "WRONG!!!\n"; // WRONG ANSWER
							cout << "THE CORRECT ANSWER IS " << realAnswer; // Display the real correct answer
							cout << "\n\n"; // Linespace
						}
					}
				
				}


				cout << "Total score is " << totalScore << "/25"; // Display final score
				Percentage = (totalScore / 25) * 100; // Compute score percentage

				cout << "\n\nFinal marks is " << Percentage << "%\n"; // Display score percentage
				if (totalScore == 0) // Selection structure, execute if true
				{
					cout << "Bruh..."; // Bruh
				}
				else if (totalScore == 5) // Selection structure, execute if true
				{
					cout << "Poor..."; // Poor
				}
				else if (totalScore == 10) // Selection structure, execute if true
				{
					cout << "Fair!"; // Fair
				}
				else if (totalScore == 15) // Selection structure, execute if true
				{
					cout << "Good!"; // Good
				}
				else if (totalScore == 20) // Selection structure, execute if true
				{
					cout << "Very good!"; // Very good!
				}
				else if (totalScore == 25) // Selection structure, execute if true
				{
					cout << "EXCELLENT!!!"; // EXCELLENT!!!
				}

				cout << "\n\nDo you still wish to continue using our program?..." << endl; // Ask the user
				cout << "1. Yes" << endl; // 
				cout << "2. No" << endl; // Choice
				cout << "Your choice is : "; // Prompts the user to enter choice
				cin >> choiceFinal; // Input choiceFinal
				while (choiceFinal != 1 && choiceFinal != 2) // While loop, loop if choiceFinal not 1 or 2
				{
					cout << "Error input is invalid! Please re-input your choice..." << endl; // Display error message
					cin >> choiceFinal; // Input choiceFinal
				}


			}


			else if (choice == 4)
			{
				cout << "Thanks for using our program!" << endl; // Thanks for using our program
				cout << "Have a good day !!!"; // Have a good day
				choiceFinal = choice; // Assign choiceFinal to choice
			}
		}while (choiceFinal == 1); // Do - While loop

		if (choiceFinal == 2) // If true, Exit program
		{
			cout << "Thanks for using our program!" << endl; // Farewell
			cout << "Have a good day !!!"; // Have a good day!
		}

	system("pause>0"); // System pause
	return 0; // Return 0
} // THE END