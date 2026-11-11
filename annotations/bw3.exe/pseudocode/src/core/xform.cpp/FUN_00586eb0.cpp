// Name: core_xform.cpp_FUN_00586eb0
// Address: 00586eb0
// Address Range: [[00586eb0, 00586f8d]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00586eb0(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_xform_cpp_FUN_00586eb0(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int force_immediate;
  
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr->base);
    iVar2 = pSVar3->state_index;
    if ((((iVar2 == 0x13) || (iVar2 == 0x10)) || (iVar2 == 0x14)) ||
       (((iVar2 == 0x11 || (iVar2 == 0x15)) || (iVar2 == 0x12)))) goto LAB_00586ef3;
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    iVar2 = iVar2 + 0x10;
  }
  else {
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    iVar2 = iVar2 + 0xd;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&this_ptr->base,iVar2,force_immediate);
LAB_00586ef3:
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                    (0x02CF5680,*(uint *)(param_1[1].base.base.actor_name + 0x1c));
  if (iVar2 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(param_1,param_2);
    return;
  }
  uVar4 = (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"dog2.wav");
  *(uint *)(param_1[1].base.base.actor_name + 0x1c) = uVar4;
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(param_1,param_2);
  return;
}
