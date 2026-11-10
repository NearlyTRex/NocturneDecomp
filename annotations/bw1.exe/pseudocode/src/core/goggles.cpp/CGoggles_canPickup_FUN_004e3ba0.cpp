// Name: core_goggles.cpp_CGoggles_canPickup_FUN_004e3ba0
// Address: 004e3ba0
// Address Range: [[004e3ba0, 004e3bbf]]
// Convention: __cdecl
// Signature: int __cdecl core_goggles_cpp_CGoggles_canPickup_FUN_004e3ba0(CGoggles *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_goggles_cpp_CGoggles_canPickup_FUN_004e3ba0(CGoggles *this_ptr,CDemonActor *picker)

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
