#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::string command;
  std::string parameters;
  string input;

  while (true)
  {
    std::cout << "$ " << std::flush;
    getline(cin, input);

    size_t spacePos = input.find(' ');
    if (spacePos != string::npos) {
      command = input.substr(0, spacePos);
      parameters = input.substr(spacePos + 1); 
    } else {
      command = input;
      parameters = "";
    }

    if (command == "exit")
    {
      break;
    }
    else if (command == "echo")
    {
        cout << parameters << endl;
    }
    else if (command == "type")
    {
      if (parameters == "echo" || parameters == "exit" || parameters == "type")
        cout << parameters << " is a shell builtin" << endl;
      else
        cout << parameters << ": not found" << endl;
    }
    else
    {
      cout << command << ": command not found" << endl;
    }
  }
}