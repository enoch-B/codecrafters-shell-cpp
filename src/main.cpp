#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::string command;
  std::string paramaters;

  while (true)
  {
    std::cout << "$ " << std::flush;
    std::getline(std::cin, command);
    if (command == "exit")
    {
      break;
    }
    else if (command.substr(0, 5) == "echo ")
    {

      std::cout << command.substr(5) << std::endl;
    }
    else if (command.substr(0, 5)  == "type")
    {
      paramaters=command.substr(5);
      
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
