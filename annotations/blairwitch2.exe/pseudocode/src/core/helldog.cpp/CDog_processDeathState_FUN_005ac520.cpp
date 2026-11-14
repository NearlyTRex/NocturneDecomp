// Name: core_helldog.cpp_CDog_processDeathState_FUN_005ac520
// Address: 005ac520
// Address Range: [[005ac520, 005ac596]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processDeathState_FUN_005ac520(CDog *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_helldog_cpp_CDog_processDeathState_FUN_005ac520(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.base.model;
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,5,1);
  if (((this_ptr->base).base.base.eye_glow_enabled != 0) && (this_ptr->death_effect_done == 0)) {
    iVar1 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar1 + 0x24) == 6) {
      this_ptr->death_effect_done = 1;
      core_charactr_cpp_FUN_0042b550(this_ptr,1,0x3f800000,0,0x40a00000,0x3f800000,0,0);
      return;
    }
  }
  return;
}
