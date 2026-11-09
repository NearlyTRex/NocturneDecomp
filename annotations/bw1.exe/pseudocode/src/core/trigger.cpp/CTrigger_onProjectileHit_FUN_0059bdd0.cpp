// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0
// Address: 0059bdd0
// Address Range: [[0059bdd0, 0059bde8]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger *this_ptr)

{
  if (*(int *)&this_ptr->field_0x174 != 4) {
    return;
  }
  *(uint *)&this_ptr->field_0x2f0 = 1;
  return;
}
