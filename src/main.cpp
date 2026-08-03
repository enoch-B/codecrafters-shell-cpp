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

    string command = input.substr(0, input.find(' '));

    const size_t parametersIndex = command.find(' ') + 1;
  if (parametersIndex != string::npos) {
    parameters = command.substr(parametersIndex);
  }

    if (command == "exit")
    {
      break;
    }
    else if (command.substr(0, 5) == "echo ")
    {

      std::cout << command.substr(5) << std::endl;
    }
    else if (command == "type") {
      if (parameters == "echo" || parameters == "exit" || parameters == "type")
        std::cout << parameters << " is a shell builtin" << std::endl;
      else
        std::cout << parameters << ": not found" << std::endl;
    }
    else
    {
      std::cout << command << ": command not found" << std::endl;
    }
  }
}
