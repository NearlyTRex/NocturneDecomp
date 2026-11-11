// Name: core_hostage.cpp_CDemnfolk_processDamage_FUN_00458950
// Address: 00458950
// Address Range: [[00458950, 00458b91]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CDemnfolk_processDamage_FUN_00458950(CDemnfolk *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hostage_cpp_CDemnfolk_processDamage_FUN_00458950(CDemnfolk *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *sound_name;
  
  if ((this_ptr->base).base.is_invulnerable == 0) {
    unkafter_demnfolk_cpp_FUN_00458680((CZombie *)this_ptr,damage_info);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
    iVar3 = this_ptr->part_indices[6];
    (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount
    ;
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar3] == 0) {
      (this_ptr->base).base.hit_points = 0.0;
    }
    fVar1 = (this_ptr->base).base.hit_points;
    (this_ptr->base).attack_cooldown = 1.2;
    if (0.0 < fVar1) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      iVar3 = iVar3 + 0xe;
      if (iVar3 == 0x11) {
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        if (iVar4 != 1) {
          iVar3 = 0xe;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar3,1);
      if (this_ptr->pain_cooldown <= 0.0) {
        this_ptr->pain_cooldown = 2.0;
        iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[0]);
        if (iVar3 == 0) {
          if (this_ptr->is_female != 0) {
            uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"demn_taunt?_???.wav");
            this_ptr->sfx_handles[0] = uVar5;
            core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
            return;
          }
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"demn_taunt_???.wav");
          this_ptr->sfx_handles[0] = uVar5;
          core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
          return;
        }
      }
    }
    else {
      (this_ptr->base).base.hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         (&(this_ptr->base).base.model.base);
      if ((pSVar2->state_index != 0x19) && (pSVar2->state_index != 0x18)) {
        unkafter_demnfolk_cpp_FUN_00458180(this_ptr);
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        iVar3 = iVar3 + 0x13;
        if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)
           && ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] !=
               0)) {
          iVar3 = 0x1e;
        }
        iVar4 = _stricmp
                          ((this_ptr->base).base.model.model_name,"D_SHERIFF.dfm");
        if (iVar4 == 0) {
          iVar3 = 0x17;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar3,1);
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
        if (this_ptr->is_female == 0) {
          sound_name = "demn_die_???.wav";
        }
        else {
          sound_name = "demn_die_???.wav";
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  }
  else {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@ShotInvulnerable" + 1);
  }
  return;
}
