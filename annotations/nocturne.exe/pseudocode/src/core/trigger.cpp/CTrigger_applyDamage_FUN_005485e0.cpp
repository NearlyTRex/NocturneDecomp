// Name: core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
// Address: 005485e0
// Address Range: [[005485e0, 00548656]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(int param_1,float param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x16c) == 7) && (*(float *)(param_1 + 0x364) <= 0.0)) {
    fVar1 = *(float *)(param_1 + 0x2f0) - param_2;
    *(float *)(param_1 + 0x2f0) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x2f0) = 0;
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s received %g damage, hitpoints %g\n",param_1,(double)param_2,
               (double)*(float *)(param_1 + 0x2f0));
    *(uint *)(param_1 + 0x364) = 0x3f800000;
  }
  return;
}
