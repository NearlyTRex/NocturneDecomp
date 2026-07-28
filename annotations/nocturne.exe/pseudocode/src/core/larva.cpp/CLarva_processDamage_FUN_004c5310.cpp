// Name: core_larva.cpp_CLarva_processDamage_FUN_004c5310
// Address: 004c5310
// Address Range: [[004c5310, 004c54ee]]
// Convention: unknown
// Signature: void core_larva_cpp_CLarva_processDamage_FUN_004c5310(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_larva_cpp_CLarva_processDamage_FUN_004c5310(CEnemy *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char local_e8 [100];
  char local_84 [100];
  CVector3f CStack_20;
  
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  (param_1->base).hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 8));
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      (*(uint *)(param_1[1].base.base.actor_name + 4));
    if (iVar5 == 0) {
      fVar1 = (param_1->base).size_scale;
      if ((float)0.29999999999999999 <= fVar1) {
        if (0.69999999999999996 <= (double)fVar1) {
          pcVar3 = "big";
        }
        else {
          pcVar3 = "med";
        }
      }
      else {
        pcVar3 = "sml";
      }
      _sprintf(local_84,"l%s-shot?.wav",pcVar3);
      uVar4 = (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,local_84);
      *(uint *)(param_1[1].base.base.actor_name + 4) = uVar4;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,3,1);
  }
  else {
    this_ptr = &(param_1->base).model;
    (param_1->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index != 5) && (pSVar2->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 4));
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 8));
    fVar1 = (param_1->base).size_scale;
    if ((float)0.29999999999999999 <= fVar1) {
      if (0.69999999999999996 <= (double)fVar1) {
        pcVar3 = "big";
      }
      else {
        pcVar3 = "med";
      }
    }
    else {
      pcVar3 = "sml";
    }
    _sprintf(local_e8,"l%s-die?.wav",pcVar3);
    uVar4 = (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,local_e8);
    *(uint *)(param_1[1].base.base.actor_name + 4) = uVar4;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)param_1,&CStack_20,&param_2->impact_direction);
  core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
            ((CGore *)INT_005b96c4,&CStack_20,(CVector3f *)0x0,10,(param_1->base).blood_type);
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
