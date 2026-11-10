// Name: core_zombie.cpp_CZombie_renderOpaque_FUN_005bdfe0
// Address: 005bdfe0
// Address Range: [[005bdfe0, 005be018]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_005bdfe0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_005bdfe0(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if ((*(int *)(pSVar1 + 0x24) == 0xe) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  return iVar2;
}
