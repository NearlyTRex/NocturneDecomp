// Name: core_dog.cpp_CZombieDog_processDamage_FUN_00454e30
// Address: 00454e30
// Address Range: [[00454e30, 00454ede]]
// Convention: unknown
// Signature: void core_dog_cpp_CZombieDog_processDamage_FUN_00454e30(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_dog_cpp_CZombieDog_processDamage_FUN_00454e30(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index == 7) || (pSVar2->state_index == 6)) goto LAB_00454e65;
    iVar4 = 6;
  }
  else {
    iVar4 = 5;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr->motion_controller,iVar4,1);
LAB_00454e65:
  iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                    (g_CSound_PTR_005bed68,*(uint *)(param_1[1].base.base.actor_name + 8));
  if (iVar4 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  uVar3 = (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"dog2.wav");
  *(uint *)(param_1[1].base.base.actor_name + 8) = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
