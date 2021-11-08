#ifndef TERMINAL_APP_H
#define TERMINAL_APP_H

#include <vector>

class terminal_app
{
  public:
  terminal_app();
  ~terminal_app();
  
  void run();
  void subscribe();
  
   private:
  void console();
  void search_cmd();
  void execute_cmd();
  
  // vector<program> m_prog;
};

#endif // TERMINAL_APP_H
