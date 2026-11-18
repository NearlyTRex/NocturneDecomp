// Name: core_baal.cpp_CBaal_chooseRandomMotion_FUN_00597be0
// Address: 00597be0
// Address Range: [[00597be0, 00597c69]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_chooseRandomMotion_FUN_00597be0(CBaal *this_ptr,int allow_stand)

#include "nocturne.h"

void __cdecl core_baal_cpp_CBaal_chooseRandomMotion_FUN_00597be0(CBaal *this_ptr,int allow_stand)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  if (0.0 < this_ptr->state_cooldown) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
    return;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
  if (0x31 < iVar1) {
    if ((iVar1 < 0x32) || (0x5e < iVar1)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,2,1);
      return;
    }
    if (allow_stand != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
      this_ptr->state_cooldown = 0.0;
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
  return;
}
