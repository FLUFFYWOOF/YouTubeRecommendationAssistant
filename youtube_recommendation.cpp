#include <iostream>
#include <string>
using namespace std;

int main()
{
    int category;
    int length;

    cout << "==========================================" << endl;
    cout << "   YOUTUBE VIDEO RECOMMENDATION ASSISTANT" << endl;
    cout << "==========================================" << endl;

    // Ask user to choose a video category
    cout << "\nWhat type of video would you like to watch?" << endl;
    cout << "1. Education" << endl;
    cout << "2. Gaming" << endl;
    cout << "3. Music" << endl;
    cout << "4. Technology" << endl;
    cout << "5. Lifestyle" << endl;

    cout << "\nEnter your choice (1-5): ";
    cin >> category;

    // Check whether category is valid
    if (category < 1 || category > 5)
    {
        cout << "\nInvalid category selection." << endl;
        cout << "Please restart the program and choose between 1 and 5." << endl;
        return 0;
    }

    // Ask user to choose preferred video length
    cout << "\nHow long would you like the video to be?" << endl;
    cout << "1. Short - less than 5 minutes" << endl;
    cout << "2. Medium - 5 to 20 minutes" << endl;
    cout << "3. Long - more than 20 minutes" << endl;

    cout << "\nEnter your choice (1-3): ";
    cin >> length;

    // Check whether length is valid
    if (length < 1 || length > 3)
    {
        cout << "\nInvalid video length selection." << endl;
        cout << "Please restart the program and choose between 1 and 3." << endl;
        return 0;
    }

    cout << "\n==========================================" << endl;
    cout << "          YOUR RECOMMENDATION" << endl;
    cout << "==========================================" << endl;

    // Recommend video based on category and length
    switch (category)
    {
        case 1:
            cout << "Category: Education" << endl;

            if (length == 1)
                cout << "Recommended: Quick Learning Video or YouTube Short" << endl;
            else if (length == 2)
                cout << "Recommended: Educational Tutorial" << endl;
            else
                cout << "Recommended: Full Lecture or Documentary" << endl;

            break;

        case 2:
            cout << "Category: Gaming" << endl;

            if (length == 1)
                cout << "Recommended: Gaming Highlights" << endl;
            else if (length == 2)
                cout << "Recommended: Game Review or Tutorial" << endl;
            else
                cout << "Recommended: Full Gameplay or Livestream Recording" << endl;

            break;

        case 3:
            cout << "Category: Music" << endl;

            if (length == 1)
                cout << "Recommended: Music Video" << endl;
            else if (length == 2)
                cout << "Recommended: Music Playlist" << endl;
            else
                cout << "Recommended: Live Concert Recording" << endl;

            break;

        case 4:
            cout << "Category: Technology" << endl;

            if (length == 1)
                cout << "Recommended: Quick Tech Tips" << endl;
            else if (length == 2)
                cout << "Recommended: Technology Review or Tutorial" << endl;
            else
                cout << "Recommended: Detailed Technology Discussion" << endl;

            break;

        case 5:
            cout << "Category: Lifestyle" << endl;

            if (length == 1)
                cout << "Recommended: Lifestyle Short or Quick Tips" << endl;
            else if (length == 2)
                cout << "Recommended: Lifestyle Vlog" << endl;
            else
                cout << "Recommended: Travel or Daily Life Vlog" << endl;

            break;
    }

    cout << "\n==========================================" << endl;
    cout << "Thank you for using the YouTube Assistant!" << endl;
    cout << "==========================================" << endl;

    return 0;
}