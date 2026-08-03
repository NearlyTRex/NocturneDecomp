// Name: core_trap.cpp_CTrap_canPickup_FUN_005468a0
// Address: 005468a0
// Address Range: [[005468a0, 005468af] [005468b3, 005468ce]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_canPickup_FUN_005468a0(CTrap *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_canPickup_FUN_005468a0(CTrap *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if ((this_ptr->wolf_in_trap == (CWerewolf *)0x0) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
