// Name: core_zombie.cpp_CZombie_isGrabbable_FUN_005fc920
// Address: 005fc920
// Address Range: [[005fc920, 005fc950]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005fc920(CZombie *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005fc920(CZombie *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(grabber,"CTentacle");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30((CCharacter *)this_ptr,grabber);
  return iVar1;
}
