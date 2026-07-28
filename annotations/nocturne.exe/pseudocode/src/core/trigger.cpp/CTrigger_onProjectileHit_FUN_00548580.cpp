// Name: core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580
// Address: 00548580
// Address Range: [[00548580, 00548598]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger *this_ptr)

{
  if (this_ptr->hero_triggers_me != 4) {
    return;
  }
  this_ptr->event_flag = 1;
  return;
}
