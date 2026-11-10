// Name: core_keyactor.cpp_CKeyActor_canPickup_FUN_004fc770
// Address: 004fc770
// Address Range: [[004fc770, 004fc78b]]
// Convention: __cdecl
// Signature: int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004fc770(CKeyActor *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_keyactor_cpp_CKeyActor_canPickup_FUN_004fc770(CKeyActor *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
