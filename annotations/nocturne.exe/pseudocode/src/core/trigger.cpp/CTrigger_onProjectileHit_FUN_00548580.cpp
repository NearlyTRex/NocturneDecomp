// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580
// Address: 00548580
// Address Range: [[00548580, 00548598]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(int param_1)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(int param_1)

{
  if (*(int *)(param_1 + 0x16c) != 4) {
    return;
  }
  *(uint *)(param_1 + 0x2e8) = 1;
  return;
}
