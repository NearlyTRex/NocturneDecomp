// Name: core_haystack.cpp_CHaystack_processDamage_FUN_004b4000
// Address: 004b4000
// Address Range: [[004b4000, 004b411e]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(CHaystack *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(CHaystack *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int desired_state_index;
  
  if (ABS((this_ptr->base).invincibility_timer) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).invincibility_timer = 0.5f;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 8) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr_00->motion_controller,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  (g_CGore_PTR_005b96c4,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
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
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,desired_state_index,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
  return;
}
