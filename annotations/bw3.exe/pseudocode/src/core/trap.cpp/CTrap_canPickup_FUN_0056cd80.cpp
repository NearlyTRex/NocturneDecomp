// Name: core_trap.cpp_CTrap_canPickup_FUN_0056cd80
// Address: 0056cd80
// Address Range: [[0056cd80, 0056cd8f] [0056cd93, 0056cdae]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_canPickup_FUN_0056cd80(CTrap *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_canPickup_FUN_0056cd80(CTrap *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if ((this_ptr->wolf_in_trap == (CWerewolf *)0x0) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
