// Name: core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
// Address: 005e0b00
// Address Range: [[005e0b00, 005e0b76]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00()

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_SomethingReceivedDamage(uint param_1,
   uint param_2) */

void core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,float param_6)

{
  float fVar1;
  
  if ((*(int *)(param_5 + 0x174) == 7) && (*(float *)(param_5 + 0x36c) <= 0.0)) {
    fVar1 = *(float *)(param_5 + 0x2f8) - param_6;
    *(float *)(param_5 + 0x2f8) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_5 + 0x2f8) = 0;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",param_5,(double)param_6,
               (double)*(float *)(param_5 + 0x2f8),unaff_EBX);
    *(uint *)(param_5 + 0x36c) = 0x3f800000;
  }
  return;
}
