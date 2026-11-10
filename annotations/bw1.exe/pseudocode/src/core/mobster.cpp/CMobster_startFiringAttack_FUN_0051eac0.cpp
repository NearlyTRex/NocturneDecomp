// Name: core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0
// Address: 0051eac0
// Address Range: [[0051eac0, 0051eb2f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float fVar2;
  
  if (0.0 < this_ptr->firing_cooldown) {
    return;
  }
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.5,1.0);
  iVar1 = *(int *)&(this_ptr->base).base.field_0x25b0;
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr->firing_cooldown = fVar2;
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,2,1);
  return;
}
