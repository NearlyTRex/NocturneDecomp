// Name: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005bed50
// Address: 005bed50
// Address Range: [[005bed50, 005bed7d]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005bed50(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005bed50(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if (*(int *)(pSVar1 + 0x24) == 0xe) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0((CDemonActor *)this_ptr);
  return iVar2;
}
