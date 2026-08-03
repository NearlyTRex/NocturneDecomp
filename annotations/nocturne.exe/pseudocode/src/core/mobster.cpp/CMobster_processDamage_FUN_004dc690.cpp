// Name: core_mobster.cpp_CMobster_processDamage_FUN_004dc690
// Address: 004dc690
// Address Range: [[004dc690, 004dc815]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_004dc690(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_004dc690(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
  core_mobster_cpp_CMobster_processDismemberment_FUN_004dc2d0(this_ptr,damage_info);
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0)) {
    damage_info->damage_amount = 9999.9;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar4->state_index != 5) && (pSVar4->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,4,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      if (this_ptr->death_sound_played == 0) {
        sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
        uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"mobster-die-?.wav");
        this_ptr->death_sound_played = 1;
        this_ptr->sfx_handles[0] = uVar5;
        core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
        return;
      }
    }
    goto LAB_004dc755;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (damage_info->attacker,g_CTommyGunActorType_02dd0fd0.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
LAB_004dc731:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,3,1);
  }
  else {
    iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
    if (iVar3 != 0) goto LAB_004dc731;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
  if (iVar3 == 0) {
    uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"mobster-hit-?.wav");
    this_ptr->sfx_handles[0] = uVar5;
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
    return;
  }
LAB_004dc755:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
