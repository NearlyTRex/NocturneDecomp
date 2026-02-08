// Name: core_trigger.cpp_CTrigger_FUN_005e0ac0
// Address: 005e0ac0
// Address Range: [[005e0ac0, 005e0af8]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_FUN_005e0ac0(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e0ac0(CTrigger *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  
  if ((in_stack_00000008 != (char *)0x0) && (this_ptr->hero_triggers_me == 7)) {
    if (this_ptr->damage_actor_name_wildcard_name[0] == '\0') {
      return 1;
    }
    iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      (this_ptr->damage_actor_name_wildcard_name,in_stack_00000008,0);
    return iVar1;
  }
  return 0;
}
