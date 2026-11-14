// Name: core_zombie.cpp_CZombie_isInvulnerable_FUN_0058cbe0
// Address: 0058cbe0
// Address Range: [[0058cbe0, 0058cc12]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_isInvulnerable_FUN_0058cbe0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_isInvulnerable_FUN_0058cbe0(CZombie *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  iVar1 = pSVar2->state_index;
  if ((((iVar1 != 0xf) && (iVar1 != 0x16)) && (iVar1 != 0x17)) && (iVar1 != 0x15)) {
    return 0;
  }
  return 1;
}
