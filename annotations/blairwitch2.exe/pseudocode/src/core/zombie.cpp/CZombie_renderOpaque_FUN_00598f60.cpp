// Name: core_zombie.cpp_CZombie_renderOpaque_FUN_00598f60
// Address: 00598f60
// Address Range: [[00598f60, 00598f98]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_00598f60(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_00598f60(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  if ((pSVar1->state_index == 0xe) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  return iVar2;
}
