// Name: core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
// Address: 005485a0
// Address Range: [[005485a0, 005485dd]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if ((actor != (CDemonActor *)0x0) && (this_ptr->hero_triggers_me == 7)) {
    if (this_ptr->damage_actor_wildcard_name[0] == '\0') {
      return 1;
    }
    iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                      (this_ptr->damage_actor_wildcard_name,actor->actor_name,0);
    return iVar1;
  }
  return 0;
}
