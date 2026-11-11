// Name: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_0058cbb0
// Address: 0058cbb0
// Address Range: [[0058cbb0, 0058cbdd]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_0058cbb0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_0058cbb0(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  if (pSVar1->state_index == 0xf) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0((CDemonActor *)this_ptr);
  return iVar2;
}
