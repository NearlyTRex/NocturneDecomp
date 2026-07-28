// Name: core_biggs.cpp_CBiggs_processDamage_FUN_00415900
// Address: 00415900
// Address Range: [[00415900, 004159b3]]
// Convention: unknown
// Signature: void core_biggs_cpp_CBiggs_processDamage_FUN_00415900(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_biggs_cpp_CBiggs_processDamage_FUN_00415900(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  int iVar2;
  
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,7,1)
    ;
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,6,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
