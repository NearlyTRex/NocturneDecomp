// Name: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005fc9e0
// Address: 005fc9e0
// Address Range: [[005fc9e0, 005fca0d]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005fc9e0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005fc9e0(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if (pSVar1->state_index == 0xe) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720((CDemonActor *)this_ptr);
  return iVar2;
}
