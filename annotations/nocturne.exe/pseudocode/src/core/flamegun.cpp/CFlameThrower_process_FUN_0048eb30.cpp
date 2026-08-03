// Name: core_flamegun.cpp_CFlameThrower_process_FUN_0048eb30
// Address: 0048eb30
// Address Range: [[0048eb30, 0048ec52]]
// Convention: __cdecl
// Signature: void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_0048eb30(CFlameThrower *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_0048eb30(CFlameThrower *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  uint uVar5;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,delta_time);
  if (this_ptr->is_firing == 0) {
    if (this_ptr->sfx_handle != 0) {
      core_sound_cpp_CSound_killSound_FUN_0052ebb0(g_CSound_PTR_005bed68,this_ptr->sfx_handle);
      this_ptr->sfx_handle = 0;
    }
    pCVar3 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
    if (pCVar3 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284);
    }
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
    if (iVar4 == 0) {
      uVar5 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"fl-throw.wav");
      this_ptr->sfx_handle = uVar5;
    }
    fVar1 = this_ptr->fire_rate_timer - delta_time;
    this_ptr->fire_rate_timer = fVar1;
    if (fVar1 < 0.0) {
      fVar2 = 1.0 / 4.0f;
      iVar4 = (this_ptr->base).ammo_count + -1;
      (this_ptr->base).ammo_count = iVar4;
      this_ptr->fire_rate_timer = fVar2 + fVar1;
      if (iVar4 < 0) {
        (this_ptr->base).ammo_count = 0;
      }
    }
  }
  iVar4 = this_ptr->is_firing;
  this_ptr->is_firing = 0;
  this_ptr->was_firing_prev_frame = iVar4;
  return;
}
