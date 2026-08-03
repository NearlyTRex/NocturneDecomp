// Name: core_keyactor.cpp_CKeyActor_canPickup_FUN_004c36d0
// Address: 004c36d0
// Address Range: [[004c36d0, 004c36eb]]
// Convention: __cdecl
// Signature: int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004c36d0(CKeyActor *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004c36d0(CKeyActor *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
