// Name: core_kedward.cpp_CKedward_resetChaseState_FUN_005919a0
// Address: 005919a0
// Address Range: [[005919a0, 005919e2]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_resetChaseState_FUN_005919a0(CKedward *this_ptr)

#include "nocturne.h"

void __cdecl core_kedward_cpp_CKedward_resetChaseState_FUN_005919a0(CKedward *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  if (this_ptr->speed_boosted == 0) {
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar1 < 0x55) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,2,1);
  return;
}
