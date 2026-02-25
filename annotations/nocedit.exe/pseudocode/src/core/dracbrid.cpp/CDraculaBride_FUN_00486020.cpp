// Name: core_dracbrid.cpp_CDraculaBride_FUN_00486020
// Address: 00486020
// Address Range: [[00486020, 0048606e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_00486020(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_00486020(CDraculaBride *this_ptr)

{
  CConsole *this_ptr_00;
  int *in_stack_00000008;
  
  this_ptr_00 = g_CConsolePtr;
  if (((in_stack_00000008[0xc] != 0x6c) && (*in_stack_00000008 == this_ptr->part_indices[6])) &&
     (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_00,"Shot thru the heart\n");
    return;
  }
  return;
}
