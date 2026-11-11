// Name: core_carved.cpp_CCarved_processDamage_FUN_00428a80
// Address: 00428a80
// Address Range: [[00428a80, 00428c9a]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_processDamage_FUN_00428a80(CCarved *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_carved_cpp_CCarved_processDamage_FUN_00428a80(CCarved *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  char *sound_name;
  
  if ((this_ptr->base).base.is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@ShotInvulnerable" + 1);
    return;
  }
  core_carved_cpp_FUN_00428810(this_ptr,damage_info);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar3 = this_ptr->part_indices[6];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar3] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).attack_cooldown = 1.2;
  if (0.0 < fVar1) {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,iVar3 + 0xd,1)
    ;
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[0]);
      if (iVar3 == 0) {
        if (this_ptr->is_female != 0) {
          uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"demn_taunt?_???.wav");
          this_ptr->sfx_handles[0] = uVar4;
          core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
          return;
        }
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"demn_taunt_???.wav");
        this_ptr->sfx_handles[0] = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar3 = pSVar2->state_index;
    if (((iVar3 == 0x16) || (iVar3 == 0x13)) && ((iVar3 == 0x17 || (iVar3 == 0x14)))) {
      if (iVar3 == 0x18) goto LAB_00428b93;
      if (iVar3 == 0x15) {
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
        return;
      }
    }
    core_carved_cpp_FUN_00428600(this_ptr);
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar3 + 0x13,1);
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
    if (this_ptr->is_female == 0) {
      sound_name = "demn_die_???.wav";
    }
    else {
      sound_name = "demn_die_???.wav";
    }
    (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
  }
LAB_00428b93:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
