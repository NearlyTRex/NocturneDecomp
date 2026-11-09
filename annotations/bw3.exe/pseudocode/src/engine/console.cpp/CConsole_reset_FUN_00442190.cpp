// Name: engine_console.cpp_CConsole_reset_FUN_00442190
// Address: 00442190
// Address Range: [[00442190, 004421ca]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_reset_FUN_00442190(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_00442190(CConsole *this_ptr)

{
  memset(&this_ptr->field_0x8,0,4000);
  *(uint *)&this_ptr->field_0xfa8 = 0;
  *(uint *)&this_ptr->field_0xfac = 0;
  unkafter_dosio_cpp_FUN_00466220("console.txt");
  return;
}
