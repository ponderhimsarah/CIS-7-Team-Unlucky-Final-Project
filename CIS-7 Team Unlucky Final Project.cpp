// Sarah Welch
// CIS-7-22554
// Final Project Case 2:
// UCR Medical Center Volunteers
// 6/6/22

#include <iostream>
#include <string>   //for string function
#include <cstdlib>  //for random number generation
#include <ctime>    //for random number generation

using namespace std;

int main()
{
  // Variables to hold user's language
  // and specialization choices
  int userLanguage, userSpecialization;
  
  // Variable to hold user's choice to loop
  char loop;

  // Beginning of loop
  do
 {
   
  // Multidimentional array
  // Used to link together languages and countries
  string DWBcountries[5][3] = {{"Mexico", "El Salvador", "Colombia"}, {"United States", "Sierra Leone", "Liberia"}, {"Egypt", "Iraq", "Syria"}, {"France", "Madagascar", "Burkina Faso"}, {"Belarus", "Russian Federation", "Kyrgyzstan"}};

   
  // Display Language Prompt
  cout << "Choose a language you are fluent in: "<<endl;

  cout << "  "<<endl;

  cout << "Languages:"<<endl;
  cout << "----------------"<<endl;
  cout << "1. Spanish"<<endl;
  cout << "2. English"<<endl;
  cout << "3. Arabic"<<endl;
  cout << "4. French"<<endl;
  cout << "5. Russian"<<endl;;

  cout << "                "<<endl;

  cin >> userLanguage;
  cout << "                "<<endl;

   // Input validation; ends program if
   // input is greater than or equal to 6
   if(0 >= userLanguage || userLanguage >= 6)
   {
     cout << "Invalid input detected; program terminating.";
     cout << "                "<<endl;
     return 1;
   }

  // Switch statement used to display a
  // different confirmation message for
  // each choice
  switch(userLanguage-1)
    {
      case 0:
      cout << "You have selected Spanish as your language."<<endl;
      break;

      case 1:
      cout << "You have selected English as your language."<<endl;
      break;

      case 2:
      cout << "You have selected Arabic as your language."<<endl;
      break;

      case 3:
      cout << "You have selected French as your language."<<endl;
      break;

      case 4:
      cout << "You have selected Russian as your language."<<endl;
      break;
    }

  cout << "                "<<endl;

  // Display Specialization Prompt
  cout << "Select your specialization: "<<endl;
  
  cout << "  "<<endl;

  cout << "Specializations:"<<endl;
  cout << "---------------------"<<endl;
  cout << "1. Adolescent Medicine"<<endl;
  cout << "2. Emergency Medicine"<<endl;
  cout << "3. Infectious Disease"<<endl;
  cout << "4. Toxicology"<<endl;
  cout << "5. Allergy and Immunology"<<endl;

  cout << "                "<<endl;

  cin >> userSpecialization;
  cout << "                "<<endl;

   // Input validation; ends program if
   // input is greater than or equal to 6
   if(0 >= userLanguage || userLanguage >= 6)
   {
     cout << "Invalid input detected; program terminating.";
     cout << "                "<<endl;
     return 2;
   }

  // Switch statement used to display a
  // different confirmation message for
  // each choice
   switch(userSpecialization)
    {
      case 1:
      cout << "You have selected Adolescent Medicine \n"; 
      cout << "as your specialty."<<endl;
      break;

      case 2:
      cout << "You have selected Emergency Medicine \n"; 
      cout << "as your specialty."<<endl;
      break;

      case 3:
      cout << "You have selected Infectious Disease \n"; 
      cout << "as your specialty."<<endl;
      break;

      case 4:
      cout << "You have selected Toxicology \n"; 
      cout << "as your specialty."<<endl;
      break;

      case 5:
      cout << "You have selected Allergy and Immunology \n";
      cout << "as your specialty."<<endl;
      break;
    }

   
    cout << "                "<<endl;

  // Random Number Generator used to pick
  // a different country even if the same
  // language and specialty are picked
    srand(time(0));

    int index = (rand() % 3);

    cout << "                "<<endl;

   // Display prompt before assigned country
    cout << "Your assigned country is ";
   // Display assigned country
    cout << DWBcountries[userLanguage-1][index];
    cout << "."<<endl;

    cout << "                "<<endl;

  // Display prompt for number of possible outcomes
  cout << "The set of possible outcomes is equal to \n";
  cout << "the number of available languages multiplied \n";
  cout << "by the amount of available specializations."<<endl;
  cout << " L * S => 5 * 5 => 25"<<endl;

  cout << "                "<<endl;

  // Display prompt for probability of
  // choosing any one outcome out of the 
  // total number of outcomes
  cout << "The probability of participants matching based \n";
  cout << "on their language fluency and specialization choice \n";
  cout << "is 1/25. This equates to about 4%.";

  cout << "                "<<endl;

   // Display prompt for loop condition
   cout << "                "<<endl;
   cout << "Would you like to run the program again? \n";
   cout << "(Enter Y or N)";
   
   cout << "                "<<endl;
   
  cin >> loop;
   
   cout << "                "<<endl;
}
 while(loop=='Y');  // end of loop

  if(loop=='N')  // Exit message
  {
    cout << "Thank you for using the program.";
    cout << "                "<<endl;
    
  }
  else  // For invalid input
  {
    cout << "                "<<endl;
    cout << "Invalid input detected; program terminating.";
    cout << "                "<<endl;
    return 3;
  }
  
  return 0;
}
