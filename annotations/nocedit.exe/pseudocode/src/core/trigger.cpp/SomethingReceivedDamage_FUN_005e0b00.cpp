// Name: core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
// Address: 005e0b00
// Address Range: [[005e0b00, 005e0b76]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00(void)

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_SomethingReceivedDamage(uint param_1,
   uint param_2) */

void __cdecl core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00(void)

{
  float fVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if ((*(int *)(in_stack_00000004 + 0x174) == 7) && (*(float *)(in_stack_00000004 + 0x36c) <= 0.0))
  {
    fVar1 = *(float *)(in_stack_00000004 + 0x2f8) - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x2f8) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(in_stack_00000004 + 0x2f8) = 0;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n");
    *(uint *)(in_stack_00000004 + 0x36c) = 0x3f800000;
  }
  return;
}
