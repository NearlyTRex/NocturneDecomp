// Name: core_yow.cpp_FUN_005b9170
// Address: 005b9170
// Address Range: [[005b9170, 005b927e]]
// Convention: unknown
// Signature: void core_yow_cpp_FUN_005b9170(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_yow_cpp_FUN_005b9170(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  SMotion *pSVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  core_yow_cpp_FUN_005b8eb0(param_1,param_2);
  fVar3 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar3;
  if (0.0 < fVar3) {
    iVar4 = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&this_ptr->base,iVar2 + 0xd,iVar4);
  }
  else {
    (param_1->base).hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr->base);
    iVar2 = pSVar1->state_index;
    if ((((iVar2 != 0x13) && (iVar2 != 0x10)) && (iVar2 != 0x14)) &&
       (((iVar2 != 0x11 && (iVar2 != 0x15)) && (iVar2 != 0x12)))) {
      iVar4 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&this_ptr->base,iVar2 + 0x10,iVar4);
      core_sound_cpp_CSound_killSound_FUN_0057d9d0
                (0x02C82A60,(uint)param_1[1].base.base.orient_matrix.m[1].x);
      fVar3 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                               ((CDemonActor *)param_1,"dog-damage?.wav");
      param_1[1].base.base.orient_matrix.m[1].x = fVar3;
    }
  }
  core_sound_cpp_CSound_killSound_FUN_0057d9d0
            (0x02C82A60,(uint)param_1[1].base.base.orient_matrix.m[1].x);
  fVar3 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                           ((CDemonActor *)param_1,"dog-damage?.wav");
  param_1[1].base.base.orient_matrix.m[1].x = fVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(param_1,param_2);
  return;
}
