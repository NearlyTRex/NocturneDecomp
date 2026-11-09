// Name: core_zombie.cpp_CZombie_isGrabbable_FUN_00599c10
// Address: 00599c10
// Address Range: [[00599c10, 00599c40]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_00599c10(CZombie *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_00599c10(CZombie *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c840(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_FUN_00427a00((CCharacter *)this_ptr,grabber);
  return iVar1;
}
