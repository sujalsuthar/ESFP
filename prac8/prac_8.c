#include <stdio.h>

int main()
{
    int choice;

    while (1)
    {
        printf("College Information System Menu:\n");
        printf("1. Enquiry in college\n");
        printf("2. Eligibility criteria for B-tech course\n");
        printf("3. Admission process in college\n");
        printf("4. All semester subjects\n");
        printf("0. Exit from the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: 
            {
                char enquiry_choice;
                printf("a. Regular student enquiry\n");
                printf("b. Diploma to degree student enquiry\n");
                printf("Enter your choice: ");
                scanf(" %c", &enquiry_choice);

                switch (enquiry_choice) 
                {
                    case 'a':
                        printf("1. 1st year enquiry\n");
                        printf("2. 2nd year enquiry\n");
                        printf("3. 3rd year enquiry\n");
                        printf("4. 4th year enquiry\n");
                        break;
                    case 'b':
                        printf("1. 1st year enquiry\n");
                        printf("2. 2nd year enquiry\n");
                        printf("3. 3rd year enquiry\n");
                        printf("4. 4th year enquiry\n");
                        break;
                    default:
                        printf("Invalid choice for enquiry.\n");
                        break;
                }
                break;
            }

            case 2:
                break;

            case 3: 
            {
                char admission_choice;
                printf("a. First year admission\n");
                printf("b. Second year admission\n");
                printf("c. Third year admission\n");
                printf("d. Fourth year admission\n");
                printf("Enter your choice: ");
                scanf(" %c", &admission_choice);
                break;
            }

            case 4: 
            {
                char subject_choice;
                printf("a. 1st semester subjects\n");
                printf("b. 2nd semester subjects\n");
                printf("c. 3rd semester subjects\n");
                printf("d. 4th semester subjects\n");
                printf("Enter your choice: ");
                scanf(" %c", &subject_choice);
                break;
            }

            case 0:
                printf("Exiting from the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
