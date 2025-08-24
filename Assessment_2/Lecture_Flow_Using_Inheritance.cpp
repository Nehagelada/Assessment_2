#include<iostream>
#include<string>
using namespace std;

// Class to represent Lecture Details
class Lecture
{
	private:
	    string lecturerName;
	    string subjectName;
	    string courseName;
	    int lectureCount;

	public:
	    // Constructor to initialize values
	    Lecture() 
		{
	        lecturerName = "";
	        subjectName = "";
	        courseName = "";
	        lectureCount = 0;
	    }
	
	    // Function to assign initial values
	    void setInitialValues(string name, string subject, string course, int count)
		 {
	        lecturerName = name;
	        subjectName = subject;
	        courseName = course;
	        lectureCount = count;
	    }
	
	    // Function to add lecture details
	    void addLectureDetails() 
		{
	        cout << "\nEnter Lecturer Name: ";
	        getline(cin, lecturerName);
	        cout << "Enter Subject Name: ";
	        getline(cin, subjectName);
	        cout << "Enter Course Name: ";
	        getline(cin, courseName);
	        cout << "Enter Number of Lectures: ";
	        cin >> lectureCount;
	        cin.ignore(); // To ignore leftover newline from input buffer
	    }
	
	    // Function to display lecture details
	    void displayLectureDetails()  
		{
	        cout << "\nLecturer Name: " << lecturerName;
	        cout << "\nSubject Name: " << subjectName;
	        cout << "\nCourse Name: " << courseName;
	        cout << "\nNumber of Lectures: " << lectureCount << "\n";
	    }
};

// Main function to manage multiple lecturers
int main() {
    Lecture lecturers[5]; // Array to store details of 5 lecturers

    cout << "===== Lecture Management System =====\n";

    // Input details for each lecturer
    for (int i = 0; i < 5; i++) 
	{
        cout << "\nEnter details for Lecturer " << i + 1 << ":\n";
        lecturers[i].addLectureDetails();
    }

    // Display details of all lecturers
    cout << "\n===== Displaying All Lecturer Details =====\n";
    for (int i = 0; i < 5; i++) 
	{
        cout << "\n--- Lecturer " << i + 1 << " ---";
        lecturers[i].displayLectureDetails();
    }

    cout << "\n===== End of Program =====\n";
    return 0;
}

