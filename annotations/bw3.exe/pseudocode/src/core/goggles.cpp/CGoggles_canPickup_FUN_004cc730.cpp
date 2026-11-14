// Name: core_goggles.cpp_CGoggles_canPickup_FUN_004cc730
// Address: 004cc730
// Address Range: [[004cc730, 004cc74f]]
// Convention: __cdecl
// Signature: int __cdecl core_goggles_cpp_CGoggles_canPickup_FUN_004cc730(CGoggles *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_goggles_cpp_CGoggles_canPickup_FUN_004cc730(CGoggles *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
