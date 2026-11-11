// Name: core_heal.cpp_CHeal_ctor_FUN_004d1960
// Address: 004d1960
// Address Range: [[004d1960, 004d1a05]]
// Convention: unknown
// Signature: CHeal * core_heal_cpp_CHeal_ctor_FUN_004d1960(CHeal *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHeal * core_heal_cpp_CHeal_ctor_FUN_004d1960(CHeal *this_ptr)

{
  CHeal *pCVar1;
  
  pCVar1 = (CHeal *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CHealVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar1->base).model,"heal_stick.KFM");
  (pCVar1->base).is_spread_weapon = 0;
  (pCVar1->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar1->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_UNUSED;
  (pCVar1->base).can_penetrate = 1;
  (pCVar1->base).bolt_velocity = 50.0;
  (pCVar1->base).fire_cooldown = 0;
  (pCVar1->base).ammo_type = AMMO_TYPE_MANA;
  (pCVar1->base).ammo_per_shot = 0xf;
  (pCVar1->base).weapon_class = 3;
  (pCVar1->base).draw_crosshair = 0;
  pCVar1->is_firing = 0;
  pCVar1->was_firing_prev_frame = 0;
  return pCVar1;
}
