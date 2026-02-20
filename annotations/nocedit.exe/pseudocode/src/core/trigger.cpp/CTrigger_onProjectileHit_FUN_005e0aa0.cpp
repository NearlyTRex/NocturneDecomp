// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0
// Address: 005e0aa0
// Address Range: [[005e0aa0, 005e0ab8]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(CTrigger *this_ptr)

{
  if (this_ptr->hero_triggers_me != 4) {
    return;
  }
  this_ptr->event_flag = 1;
  return;
}
