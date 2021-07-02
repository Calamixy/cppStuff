// Console App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h> // SetConsoleTitle (forgot)
#include <stdlib.h> // SetConsoleTitle (forgot)

using namespace std; // Enforce global so I don't have to do std:: anymore (lazy!)


int main()
{
	AllocConsole();
	std::wstring strW = L"cat evaluator";
	SetConsoleTitle(strW.c_str()); // obvious
	string cats;
	string yes("yes");
	string no("no");
	printf("hi\n");
	printf("i'm calamixy!\n");
	printf("i like cats, they're really cute and cuddly ... \n");
	printf("do you like cats?\n");
	printf("(yes or no)\n");
	cout << R"(
                   .               ,.
                  T."-._..---.._,-"/|
                  l|"-.  _.v._   (" |
                  [l /.'_ \; _~"-.`-t
                  Y " _(o} _{o)._ ^.|
                  j  T  ,-<v>-.  T  ]
                  \  l ( /-^-\ ) !  !
                   \. \.  "~"  ./  /c-..,__
                     ^r- .._ .- .-"  `- .  ~"--.
                      > \.                      \
                      ]   ^.                     \
                      3  .  ">            .       Y  ~Reoooooooow
         ,.__.--._   _j   \ ~   .         ;       |
        (    ~"-._~"^._\   ^.    ^._      I     . l
         "-._ ___ ~"-,_7    .Z-._   7"   Y      ;  \        _
            /"   "~-(r r  _/_--._~-/    /      /,.--^-._   / Y
            "-._    '"~~~>-._~]>--^---./____,.^~        ^.^  !
                ~--._    '   Y---.                        \./
                     ~~--._  l_   )                        \
                           ~-._~~~---._,____..---           \
                               ~----"~       \
)" << '\n'; // R = Raw String Literal
	cin >> cats;
	if(cats.find(yes)) { // if the string 'yes' is found inside of cin >> cats result, it'll output the following || ignore that yes and no are reversed
		printf("you'll be executed tomorrow\n");
        cout << R"(
                               |        |
                               |\      /|
                               | \____/ |
                               |  /\/\  |
                              .'___  ___`.
                             /  \|/  \|/  \
            _.--------------( ____ __ _____)     ~~-- Genuine face of disapproval. --~~
         .-' \  -. | | | | | \ ----\/---- /
       .'\  | | / \` | | | |  `.  -'`-  .'
      /`  ` ` '/ / \ | | | | \  `------'\
     /-  `-------.' `-----.       -----. `---.
    (  / | | | |  )/ | | | )/ | | | | | ) | | )
     `._________.'_____,,,/\_______,,,,/_,,,,/
)" << '\n'; // R = Raw String Literal
		Sleep(3000); // sleep so it doesn't crash instantly
	}
	if (cats.find(no)) { // if the string 'no' is found inside of cin >> cats result, it'll output the following || ignore that yes and no are reversed pls
		printf("friends forever..\n");
        cout << R"( 
             *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *
          |\___/|
         =) ^Y^ (=            .              '
          \  ^  /
           )=*=(       *
          /     \
          |     |
         /| | | |\
         \| | |_|/\
  jgs_/\_//_// ___/\_/\_/\_/\_/\_/\_/\_/\_/\_
  |  |  |  | \_) |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
)" << '\n'; // R = Raw String Literal

		Sleep(3000); // sleep so it doesn't crash instantly
	}
	return 0;

}
