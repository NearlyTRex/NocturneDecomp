// Name: core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800
// Address: 0059f800
// Address Range: [[0059f800, 0059f92f]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (((this_ptr->base).base.is_invulnerable == 0) || (damage_info->damage_amount == 9999.0)) {
    fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar1;
    if (0.0 < fVar1) {
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      if ((CCharacter *)damage_info->wielder == (this_ptr->base).victim) {
        (this_ptr->base).victim_search_timer = this_ptr->mad_timer;
      }
      this_ptr->flinch_timer = 0.0;
      fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      if ((float)_DAT_005ef9b7 < fVar1) {
        this_ptr->flinch_active = 1;
      }
      if ((this_ptr->hit_sound[0] != '\0') &&
         (iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->hit_sfx_handle), iVar2 == 0)) {
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,this_ptr->hit_sound);
        this_ptr->hit_sfx_handle = uVar3;
        return;
      }
    }
    else {
      if (this_ptr->death_sound[0] != '\0') {
        core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                  (0x0264B290,(CDemonActor *)this_ptr,this_ptr->death_sound,
                   &(this_ptr->base).base.base.location.position);
      }
      (this_ptr->base).base.hit_points = 0.0;
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->state_machine,"Death");
    }
  }
  else {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"ShotInvulnerable")
    ;
  }
  return;
}
