#include <iostream>
#include <string>



int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

 
  std::string command;
  std::String paramater;

  while(true){
      std::cout << "$ " << std::flush;
      std::getline(std::cin, command);
      if(command=="exit"){
        break;
      } else if(command.substr(0,5) == "echo "){
        std::cout<<command.substr(5)<< std::endl;
      }  else if (command == "type") {
      if (parameters == "echo" || parameters == "exit" || parameters == "type")
        std::cout << parameters << " is a shell builtin" << std::endl;
      else
        std::cout << parameters << ": not found" << std::endl;
    } 

      else{
       std::cout <<command<<": command not found" << std::endl;
  }
} 
}

