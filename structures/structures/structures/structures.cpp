#include <iostream>
using namespace std;

//creating a structure to group common variables:
struct Patient{
    int patientNumber;
    string firstName;
    string surname;
};

int main()
{
    //creating an array object from structure Patient:

    Patient patients[30];
    int counter, no_of_patients;
    cout << "How many patients are being added to the system?" <<endl;
    cin >> no_of_patients;
    if (no_of_patients <= 0 && no_of_patients > 30) {
        cout << "Patients should be more than zero and less than 31..";
    }

    for (counter = 0; counter < no_of_patients; counter++) {
        patients[counter].patientNumber = counter + 1;
        cout << "Enter the patient's first name: ";
        cin >> patients[counter].firstName;
        cout << "Enter the patient's surname: ";
        cin >> patients[counter].surname;
    }
    for(counter = 0; counter < no_of_patients; counter++){
        cout << patients[counter].patientNumber << "         " << patients[counter].firstName << "         " << patients[counter].surname <<endl;
    }
    
    return 0;
}