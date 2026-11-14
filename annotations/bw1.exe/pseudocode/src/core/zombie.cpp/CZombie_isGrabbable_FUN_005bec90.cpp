// Name: core_zombie.cpp_CZombie_isGrabbable_FUN_005bec90
// Address: 005bec90
// Address Range: [[005bec90, 005becc0]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005bec90(CZombie *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005bec90(CZombie *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_isGrabbable_FUN_00431430((CCharacter *)this_ptr,grabber);
  return iVar1;
}
