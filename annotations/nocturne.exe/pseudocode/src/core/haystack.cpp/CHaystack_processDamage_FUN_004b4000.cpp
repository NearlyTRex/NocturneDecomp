// Name: core_haystack.cpp_CHaystack_processDamage_FUN_004b4000
// Address: 004b4000
// Address Range: [[004b4000, 004b411e]]
// Convention: unknown
// Signature: void core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(CCharacter *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int desired_state_index;
  
  if ((*(uint *)param_1[1].base.actor_name & 0x7fffffff) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    param_2->damage_amount = 0.0;
  }
  *(float *)param_1[1].base.actor_name = 0.5f;
  fVar1 = param_1->hit_points - param_2->damage_amount;
  this_ptr = &param_1->model;
  param_1->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    param_1->hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        param_1->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  ((CGore *)INT_005b96c4,&param_1->base,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < param_2->damage_amount) {
    if (*(int *)(param_1[2].flames[0x1d].on_event + 4) == 0) {
      desired_state_index = 4;
    }
    else {
      desired_state_index = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,desired_state_index,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
