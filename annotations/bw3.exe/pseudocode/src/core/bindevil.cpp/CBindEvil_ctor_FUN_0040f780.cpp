// Name: core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780
// Address: 0040f780
// Address Range: [[0040f780, 0040f83d]]
// Convention: unknown
// Signature: CBindEvil * core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780(CBindEvil *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBindEvil * core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780(CBindEvil *this_ptr)

{
  CBindEvil *pCVar1;
  
  pCVar1 = (CBindEvil *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CBindEvilVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar1->base).model,(char *)0x5b6321);
  (pCVar1->base).is_spread_weapon = 0;
  (pCVar1->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar1->base).weapon_type = WEAPON_TYPE_DYNAMITE;
  (pCVar1->base).can_penetrate = 1;
  (pCVar1->base).bolt_velocity = 50.0;
  (pCVar1->base).fire_cooldown = 0;
  (pCVar1->base).ammo_type = AMMO_TYPE_MANA;
  (pCVar1->base).ammo_per_shot = 0x14;
  (pCVar1->base).weapon_class = 4;
  (pCVar1->toss_velocity).z = 0.0;
  (pCVar1->toss_velocity).y = (pCVar1->toss_velocity).z;
  (pCVar1->toss_velocity).x = (pCVar1->toss_velocity).y;
  (pCVar1->base).uses_hero_ammo = 1;
  (pCVar1->base).number_of_hands_needed = 2;
  (pCVar1->base).draw_crosshair = 0;
  return pCVar1;
}
