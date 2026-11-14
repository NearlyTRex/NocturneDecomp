// Name: core_construc.cpp_CConstruct_processDamage_FUN_00437de0
// Address: 00437de0
// Address Range: [[00437de0, 00437ed4]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_processDamage_FUN_00437de0(CConstruct *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_construc_cpp_CConstruct_processDamage_FUN_00437de0(CConstruct *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int force_immediate;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar2 + 7,force_immediate);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar2 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar3;
    }
  }
  else {
    (this_ptr->base).base.hit_points = 1.0;
    core_construc_cpp_CConstruct_explode_FUN_00438060(this_ptr);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar2 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-die.wav");
      this_ptr->sfx_handles[1] = uVar3;
    }
  }
  damage_info->gore_multiplier = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
