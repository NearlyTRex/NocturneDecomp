// Name: core_sentinel.cpp_CSentinel_processDamage_FUN_00506840
// Address: 00506840
// Address Range: [[00506840, 00506939]]
// Convention: unknown
// Signature: void core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  char *sound_name;
  
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,7,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)param_1[1].base.base.actor_name);
    if (iVar4 != 0) goto LAB_005068bd;
    sound_name = "sentinel-hurt?.wav";
  }
  else {
    (param_1->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index == 8) || (pSVar2->state_index == 9)) goto LAB_005068bd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,8,1)
    ;
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)param_1[1].base.base.actor_name);
    sound_name = "sentinel-die.wav";
  }
  uVar3 = (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,sound_name);
  *(uint *)param_1[1].base.base.actor_name = uVar3;
LAB_005068bd:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
