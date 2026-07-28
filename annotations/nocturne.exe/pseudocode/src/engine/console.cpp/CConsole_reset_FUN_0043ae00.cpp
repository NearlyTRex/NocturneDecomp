// Name: engine_console.cpp_CConsole_reset_FUN_0043ae00
// Address: 0043ae00
// Address Range: [[0043ae00, 0043ae3a]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_reset_FUN_0043ae00(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_0043ae00(CConsole *this_ptr)

{
  memset(this_ptr->console_buffer,0,4000);
  this_ptr->current_column = 0;
  this_ptr->current_row = 0;
  remove("console.txt");
  return;
}
