// Name: core_hellhag.cpp_CHag_processDamage_FUN_005ab7d0
// Address: 005ab7d0
// Address Range: [[005ab7d0, 005ab8c7]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processDamage_FUN_005ab7d0(CHag *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hellhag_cpp_CHag_processDamage_FUN_005ab7d0(CHag *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if ((this_ptr->base).burn_timer <= 0.0) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005f0c96;
  }
  fVar1 = (this_ptr->base).base.base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.base.hit_points = fVar1;
  if (0.0 < fVar1) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890((CEnemy *)this_ptr,damage_info);
    if ((CCharacter *)damage_info->wielder == (this_ptr->base).base.victim) {
      (this_ptr->base).base.victim_search_timer = (this_ptr->base).mad_timer;
    }
    (this_ptr->base).flinch_timer = 0.0;
    if ((this_ptr->base).hit_sound[0] != '\0') {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70((this_ptr->base).hit_sfx_handle);
      if (iVar2 == 0) {
        uVar3 = (*((this_ptr->base).base.base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,(this_ptr->base).hit_sound);
        (this_ptr->base).hit_sfx_handle = uVar3;
        return;
      }
    }
  }
  else {
    if ((this_ptr->base).death_sound[0] != '\0') {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,(this_ptr->base).death_sound,
                 &(this_ptr->base).base.base.base.location.position);
    }
    (this_ptr->base).base.base.hit_points = 0.0;
    core_muzzle_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,"@Death" + 1);
  }
  return;
}
