// Name: core_flamegun.cpp_CFlameThrower_process_FUN_004b9710
// Address: 004b9710
// Address Range: [[004b9710, 004b9801]]
// Convention: __cdecl
// Signature: void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_004b9710(CFlameThrower *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_004b9710(CFlameThrower *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  core_weapon_cpp_CWeapon_process_FUN_005ad770(&this_ptr->base,delta_time);
  if (this_ptr->is_firing == 0) {
    if (this_ptr->sfx_handle != 0) {
      core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
      this_ptr->sfx_handle = 0;
    }
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"fl-throw.wav");
      this_ptr->sfx_handle = uVar4;
    }
    fVar1 = this_ptr->fire_rate_timer - delta_time;
    this_ptr->fire_rate_timer = fVar1;
    if (fVar1 < 0.0) {
      fVar2 = 1.0 / _DAT_006005c0;
      iVar3 = (this_ptr->base).ammo_count + -1;
      (this_ptr->base).ammo_count = iVar3;
      this_ptr->fire_rate_timer = fVar2 + fVar1;
      if (iVar3 < 0) {
        (this_ptr->base).ammo_count = 0;
      }
    }
  }
  iVar3 = this_ptr->is_firing;
  this_ptr->is_firing = 0;
  this_ptr->was_firing_prev_frame = iVar3;
  return;
}
