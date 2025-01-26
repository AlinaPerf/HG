#include <iostream>
#include <windows.h>

using namespace std;

const int DARK_BLUE = 1;
const int DARK_GREEN = 2;
const int LIGHT_BLUE = 3;
const int DARK_RED = 4;
const int MAGENTA = 5;
const int ORANGE = 6;
const int LIGHT_GREY = 7;
const int GRAY = 8;
const int BLUE = 9;
const int GREEN = 10;
const int CYAN = 11;
const int RED = 12;
const int PINK = 13;
const int YELLOW = 14;
const int WHITE = 15;

void clearScreen(int characterLength) {
    for (int i = 0; i < characterLength; i++) {
        cout << "\b";
    }
}

void changeColour(int colour) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
}

void showLoadingScreen() {
    setlocale(LC_ALL, "Russian");
    int i;
    string open = "\n"
        "                                        *     \n"
        "                                       ***    \n"
        "                                      *****   \n"
        "                                     *******  \n"
        "                                    ********* \n"
        "                                   ***********  \n"
        "                                  *************  \n"
        "                                 ***************  \n"
        "                                ***************** \n"
        "                               ******************* \n"
        "                              ********************* \n"
        "                             *********************** \n"
        "                            ************************* \n"
        "                           *************************** \n"
        "                          ***************************** \n"
        "                         ******************************* \n"
        "                        ********************************* \n"
        "                       *********************************** \n"
        "                      ************************************* \n"
        "                     *************************************** \n"
        "                    ***************************************** \n"
        "                   ******************************************* \n"
        "                  ********************************************* \n",

        closed = " ";
    int colour[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };




    for (i = 0; i < 15; i++) {

        Sleep(50);

        clearScreen(150);
        changeColour(colour[i]);
        cout << open;



        Sleep(50);
        clearScreen(150);
        changeColour(WHITE);
        cout << closed;
        system("cls");

    }
    for (i = 15; i >= 1; i--) {

        Sleep(50);

        clearScreen(150);
        changeColour(colour[i]);
        cout << open;



        Sleep(50);
        clearScreen(150);
        changeColour(WHITE);
        cout << closed;
        system("cls");

    }


    clearScreen(30);
    changeColour(WHITE);
}



void showBlinkingLights() {
    setlocale(LC_ALL, "Russian");

    changeColour(RED);

    cout << " ************ \n"
        " *          * \n"
        " *            \n"
        " *            \n"
        " *            \n"
        " *            \n"
        " *            \n"
        " *            \n"
        " *            \n"
        " *          * \n"
        " ************ \n";

    Sleep(1000);
    changeColour(ORANGE);
cout << " *          *  ************  ************  *             *  *                 *          \n"
" *          *  *          *  *          *  *             *  *                 *           \n"
" *          *  *          *  *          *  *             *  **               **            \n"
" *          *  *          *  *          *  *             *  *  *           *  *              \n"
" *          *  *          *  *          *  *             *  *    *       *    *             \n"
" ************  *          *  ************  ************  *  *      *   *      *               \n"
" *          *  *          *  *          *  *          *  *  *        *        *                \n"
" *          *  *          *  *          *  *          *  *  *                 *                \n"
" *          *  *          *  *          *  *          *  *  *                 *               \n"
" *          *  *          *  *          *  *          *  *  *                 *               \n"
" *          *  ************  ************  ************  *  *                 *                  \n";

Sleep(1000);
changeColour(GREEN);

cout << " ************  ************    ********    **************   *                 *    *    *    *    \n"
" *             *          *    *      *    *            *   *                 *    *    *    *     \n"
" *             *          *    *      *    *            *   **               **    *    *    *      \n"
" *             *          *    *      *    *            *   *  *           *  *    *    *    *        \n"
" *             *          *    *      *    *            *   *    *       *    *    *    *    *       \n"
" *             *          *    *      *    *            *   *      *   *      *    *    *    *         \n"
" *             *          *    *      *    *            *   *        *        *    *    *    *      \n"
" *             *          *  ************  *            *   *                 *    *    *    *          \n"
" *             *          *  *          *  *            *   *                 *    *    *    *         \n"
" *             *          *  *          *  *            *   *                 *                    \n"
" *             ************  *          *  **************   *                 *    *    *    *            \n";

Sleep(1000);
changeColour(WHITE);
}

int main(int argc, char** argv) {
    cout << "\n\n\n";
    cout << "      ";

    showLoadingScreen();
    showBlinkingLights();

    cout << "\n\n\n";

    return 0;
}