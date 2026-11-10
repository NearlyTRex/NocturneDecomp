// Name: engine_console.cpp_CConsole_reset_FUN_004368b0
// Address: 004368b0
// Address Range: [[004368b0, 004368ea]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_reset_FUN_004368b0(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_004368b0(CConsole *this_ptr)

{
  memset(this_ptr->console_buffer,0,4000);
  this_ptr->current_column = 0;
  this_ptr->current_row = 0;
  unkafter_dosio_cpp_FUN_00461440("console.txt");
  return;
}
