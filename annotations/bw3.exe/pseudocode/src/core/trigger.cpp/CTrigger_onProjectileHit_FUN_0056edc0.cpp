// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0
// Address: 0056edc0
// Address Range: [[0056edc0, 0056edd8]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger *this_ptr)

{
  if (*(int *)&this_ptr->field_0x174 != 4) {
    return;
  }
  *(uint *)&this_ptr->field_0x2f0 = 1;
  return;
}
