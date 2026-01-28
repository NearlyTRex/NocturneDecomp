// Name: engine_console.cpp_CConsole_reset_FUN_00441a40
// Address: 00441a40
// Address Range: [[00441a40, 00441a7a]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_reset_FUN_00441a40(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_00441a40(CConsole *this_ptr)

{
  crt_memory_c_memset_FUN_005fde40(this_ptr->console_buffer,0,4000);
  this_ptr->current_column = 0;
  this_ptr->current_row = 0;
  crt_io_c_deleteFile_FUN_005ff9d0("console.txt");
  return;
}
