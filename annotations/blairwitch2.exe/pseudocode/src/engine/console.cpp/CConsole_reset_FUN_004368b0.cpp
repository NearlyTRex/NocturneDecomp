// Name: engine_console.cpp_CConsole_reset_FUN_004368b0
// Address: 004368b0
// Address Range: [[004368b0, 004368ea]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_reset_FUN_004368b0(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_004368b0(CConsole *this_ptr)

{
  memset(&this_ptr->field_0x8,0,4000);
  *(uint *)&this_ptr->field_0xfa8 = 0;
  *(uint *)&this_ptr->field_0xfac = 0;
  unkafter_dosio_cpp_FUN_00461440("console.txt");
  return;
}
