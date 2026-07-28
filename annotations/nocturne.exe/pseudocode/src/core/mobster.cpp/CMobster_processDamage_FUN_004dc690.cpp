// Name: core_mobster.cpp_CMobster_processDamage_FUN_004dc690
// Address: 004dc690
// Address Range: [[004dc690, 004dc815]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_processDamage_FUN_004dc690(CMobster *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_mobster_cpp_CMobster_processDamage_FUN_004dc690(CMobster *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[1]);
  core_mobster_cpp_CMobster_processDismemberment_FUN_004dc2d0(param_1,param_2);
  if (((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]] == 0) &&
     ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[3]] == 0)) {
    param_2->damage_amount = 9999.9;
  }
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).base.hit_points = 0.0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar4->state_index != 5) && (pSVar4->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,4,1);
      (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
      if (param_1->death_sound_played == 0) {
        sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
        uVar5 = (*((param_1->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"mobster-die-?.wav");
        param_1->death_sound_played = 1;
        param_1->sfx_handles[0] = uVar5;
        core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
        return;
      }
    }
    goto LAB_004dc755;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_2->attacker,g_CTommyGunActorType_02dd0fd0.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
LAB_004dc731:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,3,1)
    ;
  }
  else {
    iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
    if (iVar3 != 0) goto LAB_004dc731;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]);
  if (iVar3 == 0) {
    uVar5 = (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"mobster-hit-?.wav");
    param_1->sfx_handles[0] = uVar5;
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
LAB_004dc755:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
