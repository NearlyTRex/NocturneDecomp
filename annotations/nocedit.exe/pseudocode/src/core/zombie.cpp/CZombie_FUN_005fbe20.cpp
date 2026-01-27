// Name: core_zombie.cpp_CZombie_FUN_005fbe20
// Address: 005fbe20
// Address Range: [[005fbe20, 005fbe60]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fbe20(CZombie * this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fbe20(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if (pSVar1->state_index == 0xe) {
    if (*(int *)(g_CDemonMissionPtr->unk1 + 4) == 0) {
      return 0;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return iVar2;
}
