// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550
// Address: 00578550
// Address Range: [[00578550, 00578568]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger *this_ptr)

{
  if (*(int *)&this_ptr->field_0x2d0 != 4) {
    return;
  }
  *(uint *)&this_ptr->field_0x44c = 1;
  return;
}
