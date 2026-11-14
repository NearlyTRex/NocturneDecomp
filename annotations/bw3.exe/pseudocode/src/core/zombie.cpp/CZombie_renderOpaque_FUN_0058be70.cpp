// Name: core_zombie.cpp_CZombie_renderOpaque_FUN_0058be70
// Address: 0058be70
// Address Range: [[0058be70, 0058bea8]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_0058be70(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_0058be70(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  if ((pSVar1->state_index == 0xf) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  return iVar2;
}
