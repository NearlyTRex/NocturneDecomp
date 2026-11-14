// Name: core_demnfolk.cpp_CDemnfolk_processDamage_FUN_0045c7b0
// Address: 0045c7b0
// Address Range: [[0045c7b0, 0045c9d2]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_processDamage_FUN_0045c7b0(CDemnfolk *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_demnfolk_cpp_CDemnfolk_processDamage_FUN_0045c7b0(CDemnfolk *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  int iVar4;
  
  if ((this_ptr->base).base.is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  core_demnfolk_cpp_FUN_0045c4a0(this_ptr,damage_info);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  iVar3 = this_ptr->part_indices[6];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar3] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  fVar1 = (this_ptr->base).base.hit_points;
  (this_ptr->base).attack_cooldown = 1.2;
  if (0.0 < fVar1) {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
    iVar3 = iVar3 + 0xf;
    if (iVar3 == 0x12) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      if (iVar4 != 1) {
        iVar3 = 0xf;
      }
    }
    if (damage_info->ammo_type == AMMO_TYPE_GOLD) {
      iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.6);
      if (iVar4 != 0) {
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,1);
        iVar3 = iVar3 + 9;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar3,1);
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
      if (iVar3 == 0) {
        (*(((this_ptr->base).base.base.vtable._uh)->_uh).reset)((CHero *)this_ptr);
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
        return;
      }
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    if ((pSVar2->state_index != 0x1a) && (pSVar2->state_index != 0x19)) {
      core_demnfolk_cpp_FUN_0045bfa0(this_ptr);
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      iVar3 = iVar3 + 0x14;
      if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)
         && ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)
         ) {
        iVar3 = 0x1f;
      }
      iVar4 = _stricmp
                        ((this_ptr->base).base.model.model_name,"D_SHERIFF.dfm");
      if (iVar4 == 0) {
        iVar3 = 0x18;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar3,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
      (*(((this_ptr->base).base.base.vtable._uh)->_uh).toggleGoggles)((CHero *)this_ptr);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
