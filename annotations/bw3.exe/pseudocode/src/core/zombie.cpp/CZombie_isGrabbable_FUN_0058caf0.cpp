// Name: core_zombie.cpp_CZombie_isGrabbable_FUN_0058caf0
// Address: 0058caf0
// Address Range: [[0058caf0, 0058cb20]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_0058caf0(CZombie *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_0058caf0(CZombie *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c790(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = unkafter_enemy_cpp_FUN_0048a200(this_ptr,grabber);
  return iVar1;
}
