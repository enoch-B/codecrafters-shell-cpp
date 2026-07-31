#include <iostream>
#include <string>



int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

 
  std::string command;

  while(true){
      std::cout << "$ " << std::flush;
      std::getline(std::cin, command);
      if(command=="exit"){
        break;
      } else if(command.substr(0,5) == "echo "){
        std::cout<<command.substr(5)<< std::endl;
      } else if(command == "echo" || command=="exit" || command == "type"){
        std::cout<<command<<" is a shell builtin"
      }

      else{
       std::cout <<command<<": command not found" << std::endl;
  }
} 
}
