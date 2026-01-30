// Name: core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116f2]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690(void)

#include "nocturne.h"

/* Signature: byte actors_other_ammobox.cpp_LogConsoleOpenPCTFile(uint param_1,
   uint param_2) */

void __cdecl core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  
  *(float *)(in_stack_00000004 + 0x31c) = in_stack_00000008;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Open pct : %f\n",(double)in_stack_00000008);
  if ((*(int *)(in_stack_00000004 + 0x348) == 0) &&
     (*(uint *)(in_stack_00000004 + 0x348) = 1, *(char *)(in_stack_00000004 + 0x328) != '\0'))
  {
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  return;
}
