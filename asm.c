#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

#define MAX_ARRAY 	100
#define MAX_STRING	255

// Clear the screen
void clrscr()
{
	system("cls");
}

int isEmpty(int n)
{
	return n <= 0;
}

char* ltrim(char str[])
{
	int i = 0;
	
	while (str[i] == ' ')
	{
		i++;
	}
	
	if (i > 0)
	{
		strcpy(&str[0], &str[i]);
	}
	
	return str;
}

char* rtrim(char str[])
{
	int i = strlen(str) - 1;
	
	while (str[i] == ' ')
	{
		i--;
	}
	
	str[i + 1] = '\0';
	
	return str;
}

char* trim(char str[])
{
	rtrim(ltrim(str));
	
	char* ptr = strstr(str, "  ");
	
	while (ptr != NULL)
	{
		strcpy(ptr, ptr + 1);
		ptr = strstr(str, "  ");
	}
	
	return str;
}

// Convert to formated name

void nameStr(char str[])
{
    // Remove leading and trailing spaces
    int length = strlen(str);
    while (length > 0 && str[length - 1] == ' ')
    {
        str[length - 1] = '\0';
        length--;
    }
    while (*str && *str == ' ')
    {
        strcpy(str, str + 1);
    }

    // Convert to lowercase
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }

    // Capitalize first letter of each word
    for (int i = 0; str[i]; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }
}

// To get the last word of a string
// Ex: "Nguyen Van Anh" -> "Anh"
void lastWord(char str[MAX_STRING], char last[MAX_STRING])
{
	int length = strlen(str) - 1;
	
	for (; str[length] != ' '; length--);
	
	int i = 0;
	
	for (++length; str[length] != '\0'; length++)
	{
		last[i] = str[length];
		i++;
	}
}

// To swap two numbers
void swapNumber(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}

// To swap two strings
void swapString(char str1[MAX_STRING], char str2[MAX_STRING])
{
	char temp[MAX_STRING];
	
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}

// Just print a student
void printAStudent(int ID, char name[MAX_STRING], int gender, char birthday[MAX_STRING], char phone[MAX_STRING])
{
	printf("\t| %-4d | %-35s | %-8s | %-10s | %-11s |\n", ID, name, gender ? "Female" : "Male", birthday, phone);
}

// Just print the title for option 3
void printTitleOption3()
{
	textColor(14);
	
	printf("\n\n\t\t\t    ____  _____ _______ _____ ____  _   _   ____  \n");
	printf("\t\t\t   / __ \\|  __ \\__   __|_   _/ __ \\| \\ | | |___ \\ \n");
	printf("\t\t\t  | |  | | |__) | | |    | || |  | |  \\| |   __) |\n");
	printf("\t\t\t  | |  | |  ___/  | |    | || |  | | . ` |  |__ < \n");
	printf("\t\t\t  | |__| | |      | |   _| || |__| | |\\  |  ___) |\n");
	printf("\t\t\t   \\____/|_|      |_|  |_____\\____/|_| \\_| |____/ \n\n\n");
}

// Just print the title for option 4
void printTitleOption4()
{
	
	printf("\n\n\t\t\t    ____  _____ _______ _____ ____  _   _   _  _   \n");
	printf("\t\t\t   / __ \\|  __ \\__   __|_   _/ __ \\| \\ | | | || |  \n");
	printf("\t\t\t  | |  | | |__) | | |    | || |  | |  \\| | | || |_ \n");
	printf("\t\t\t  | |  | |  ___/  | |    | || |  | | . ` | |__   _|\n");
	printf("\t\t\t  | |__| | |      | |   _| || |__| | |\\  |    | |  \n");
	printf("\t\t\t   \\____/|_|      |_|  |_____\\____/|_| \\_|    |_|  \n\n\n");
}

// The menu for sorting option
int getUserChoiceForSort()
{
	int choice = 0;
	
	textColor(15);
	printf("\t\t\t  1. Sort by ID                   |  Press 1\n");
	printf("\t\t\t  2. Sort by name                 |  Press 2\n");
	printf("\t\t\t  3. Quit!                        |  Press any\n\n\n");
	
	printf("\t\t\t\t\t Your choice: ");
	
	scanf("%d", &choice);
	fflush(stdin);
	
	return choice;
}

// The menu for searching option
int getUserChoiceForSearch()
{
	int choice = 0;
	
	printf("\t\t\t  1. Search by ID                   |  Press 1\n");
	printf("\t\t\t  2. Search by name                 |  Press 2\n");
	printf("\t\t\t  3. Search by birthday             |  Press 3\n");
	printf("\t\t\t  4. Search by phone                |  Press 4\n");
	printf("\t\t\t  5. Quit!                          |  Press any\n\n\n");
	
	printf("\t\t\t\t\t Your choice: ");
	
	scanf("%d", &choice);
	fflush(stdin);
		
	return choice;
}

// 2 - Create menu
int getUserChoice()
{
	int choice = 0;
	
	clrscr();
	
	#include <stdio.h>
	#include <string.h>

	// Function declarations

	void printAStudent(int ID, char name[], int gender, char birthday[], char phone[]);
	int isEmpty(int count);
	void nameStr(char name[]);
	void trim(char str[]);
	void swapNumber(int* a, int* b);
	void swapString(char str1[], char str2[]);
	void lastWord(char str[], char last[]);
	void clrscr();
	void printTitleOption3();
	void printTitleOption4();
	int getUserChoiceForSort();
	int getUserChoiceForSearch();

	// Rest of the code block

	
	
	
	printf("\n\t\t\t\t\t       Saved!");
}

// 8 - Remove a student by their name
// Hồ Trọng Nghĩa - QE170173
void removeStudent(int IDs[], char names[][MAX_STRING], int genders[], char birthdays[][MAX_STRING], char phones[][MAX_STRING], int* pCount)
{
	
	
	printf("\n\n\t\t\t    ____  _____ _______ _____ ____  _   _     __  \n");
	printf("\t\t\t   / __ \\|  __ \\__   __|_   _/ __ \\| \\ | |   / /  \n");
	printf("\t\t\t  | |  | | |__) | | |    | || |  | |  \\| |  / /_  \n");
	printf("\t\t\t  | |  | |  ___/  | |    | || |  | | . ` | | '_ \\ \n");
	printf("\t\t\t  | |__| | |      | |   _| || |__| | |\\  | | (_) |\n");
	printf("\t\t\t   \\____/|_|      |_|  |_____\\____/|_| \\_|  \\___/ \n\n\n");
	
	if (isEmpty(*pCount))
	{
		
		printf("\n\n\t\t\t\t     Sorry! The list is empty!\n");
		return;
	}
	
	
	
	printf("\t\t\t\t     *** Remove a student ***\n\n");
	
	int ID = 0;
	
	printf("\t - Please enter the ID of student that you want to remove: ");
	scanf("%d", &ID);
	fflush(stdin);
	
	int check = 0;
	int pos = 0;
	
	for (int i = 0; i < *pCount; i++)
	{
		if (IDs[i] == ID)
		{
			pos = i;
			check = 1;
			break;
		}
	}
	
	if (check == 0)
	{
		
		printf("\n\t\t\t\t  Can not find the ID to remove...");
		
		return;
	}
	
	if (*pCount == 1)
	{
		*pCount = 0;
	}
	else
	{
		for (int i = pos; i < *pCount - 1; i++)
		{
			IDs[i] = IDs[i + 1];
			strcpy(names[i], names[i + 1]);
			genders[i] = genders[i + 1];
			strcpy(birthdays[i], birthdays[i + 1]);
			strcpy(phones[i], phones[i + 1]);
		}
		
		(*pCount)--;
	}
	
	
	printf("\n\t\t\t\t\t      Removed!");
}

// 9 - Remove all of students
void removeAllStudents(int* pCount)
{
	
	if (isEmpty(*pCount))
	{
		printf("\n\n\t\t\t\t     Sorry! The list is empty!\n");
		return;
	}
	
	*pCount = 0;
	
	
	printf("\n\t\t\t\t       Removed all students!");
}

void quit()
{
	printf("\t\t\t\t      |     Complete!    ~----~\n");
	printf("\t\t\t\t      |  Have a nice day!    |\n");
}

int main()
{
	// Setup for console
	SetConsoleTitle("PRF192 - SE17C03 - Group 1");	// Set the title for console
	system("mode 100, 30");							// Change size of console
	
	int  IDs[MAX_ARRAY];
	char names[MAX_ARRAY][MAX_STRING];
	int  genders[MAX_ARRAY];			// By default, 0 is male, 1 is female
	char birthdays[MAX_ARRAY][MAX_STRING];
	char phones[MAX_ARRAY][MAX_STRING];
	
	int count = 0;
	
	int choice = 0;
	
	do
	{
		choice = getUserChoice();
		
		switch (choice)
		{
			case 1:
			{
				clrscr();
				printAllStudents(IDs, names, genders, birthdays, phones, count);
				getchar();
				
				break;
			}
			
			case 2:
			{
				clrscr();
				addStudent(IDs, names, genders, birthdays, phones, &count);
				getchar();
				
				break;
			}
			
			case 3:
			{
				clrscr();
				sortAllStudents(IDs, names, genders, birthdays, phones, count);
				
				break;
			}
			
			case 4:
			{
				clrscr();
				searchStudent(IDs, names, genders, birthdays, phones, count);
					
				break;
			}
			
			case 5:
			{
				clrscr();
				saveToFile(IDs, names, genders, birthdays, phones, count);
				getchar();
				
				break;
			}
			
			case 6:
			{
				clrscr();
				removeStudent(IDs, names, genders, birthdays, phones, &count);
				getchar();
				
				break;
			}
			
			case 7:
			{
				clrscr();
				removeAllStudents(&count);
				getchar();
				
				break;
			}
			
			default:
			{
				clrscr();
				
				quit();
				
				getchar();
				break;
			}
		}
	} while (choice > 0 && choice < 8);
	
	return 0;
}