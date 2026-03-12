// Name: core_flamegun.cpp_CFlameThrower_process_FUN_004cb9b0
// Address: 004cb9b0
// Address Range: [[004cb9b0, 004cbaa1]]
// Convention: __cdecl
// Signature: void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_004cb9b0(CFlameThrower *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_004cb9b0(CFlameThrower *this_ptr,float delta_time)

{
  int iVar3;
  uint uVar4;
  int iVar1;
  float fVar1;
  float fVar2;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (this_ptr->is_firing == 0) {
    if (this_ptr->sfx_handle != 0) {
      core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,this_ptr->sfx_handle);
      this_ptr->sfx_handle = 0;
    }
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"fl-throw.wav");
      this_ptr->sfx_handle = uVar4;
    }
    fVar1 = this_ptr->fire_rate_timer - delta_time;
    this_ptr->fire_rate_timer = fVar1;
    if (fVar1 < 0.0) {
      fVar2 = 1.0 / 4.0f;
      iVar1 = (this_ptr->base).ammo_count + -1;
      (this_ptr->base).ammo_count = iVar1;
      this_ptr->fire_rate_timer = fVar2 + fVar1;
      if (iVar1 < 0) {
        (this_ptr->base).ammo_count = 0;
      }
    }
  }
  iVar1 = this_ptr->is_firing;
  this_ptr->is_firing = 0;
  this_ptr->was_firing_prev_frame = iVar1;
  return;
}
