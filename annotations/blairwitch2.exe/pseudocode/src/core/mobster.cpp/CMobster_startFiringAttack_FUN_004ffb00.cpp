// Name: core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00
// Address: 004ffb00
// Address Range: [[004ffb00, 004ffb6f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_004ffb00(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_004ffb00(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float fVar2;
  
  if (0.0 < this_ptr->firing_cooldown) {
    return;
  }
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
  iVar1 = *(int *)&(this_ptr->base).base.field_0x2620;
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr->firing_cooldown = fVar2;
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)this_ptr_00,2,1);
  return;
}
