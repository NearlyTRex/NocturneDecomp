// Name: core_haystack.cpp_CHaystack_processDamage_FUN_004f1b70
// Address: 004f1b70
// Address Range: [[004f1b70, 004f1c8e]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004f1b70(CHaystack *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_haystack_cpp_CHaystack_processDamage_FUN_004f1b70(CHaystack *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int desired_state_index;
  
  if (ABS((this_ptr->base).unk1) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->debug_flag_1 != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).unk1 = 0.5f;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 8) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
        core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < damage_info->damage_amount) {
    if (this_ptr->guns_drawn == 0) {
      desired_state_index = 4;
    }
    else {
      desired_state_index = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,desired_state_index,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
