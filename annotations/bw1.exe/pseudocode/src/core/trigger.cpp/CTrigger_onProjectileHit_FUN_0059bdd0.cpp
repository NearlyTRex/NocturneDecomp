// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0
// Address: 0059bdd0
// Address Range: [[0059bdd0, 0059bde8]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger *this_ptr)

{
  if (this_ptr->trigger_cause != TRIGGER_CAUSE_BULLET) {
    return;
  }
  this_ptr->event_flag = 1;
  return;
}
