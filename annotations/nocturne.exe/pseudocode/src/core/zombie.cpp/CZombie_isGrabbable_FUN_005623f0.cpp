// Name: core_zombie.cpp_CZombie_isGrabbable_FUN_005623f0
// Address: 005623f0
// Address Range: [[005623f0, 00562420]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005623f0(CZombie *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005623f0(CZombie *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(grabber,"CTentacle");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_isGrabbable_FUN_004280a0((CCharacter *)this_ptr,grabber);
  return iVar1;
}
