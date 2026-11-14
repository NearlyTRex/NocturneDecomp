// Name: core_disease.cpp_CDisease_ctor_FUN_0045bf80
// Address: 0045bf80
// Address Range: [[0045bf80, 0045c03d]]
// Convention: __cdecl
// Signature: CDisease * __cdecl core_disease_cpp_CDisease_ctor_FUN_0045bf80(CDisease *this_ptr)

#include "nocturne.h"

CDisease * __cdecl core_disease_cpp_CDisease_ctor_FUN_0045bf80(CDisease *this_ptr)

{
  CDisease *pCVar1;
  
  pCVar1 = (CDisease *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CDiseaseVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar1->base).model,"diseasebag.kfm");
  (pCVar1->base).is_spread_weapon = 0;
  (pCVar1->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar1->base).weapon_type = WEAPON_TYPE_DYNAMITE;
  (pCVar1->base).can_penetrate = 1;
  (pCVar1->base).bolt_velocity = 100.0;
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
