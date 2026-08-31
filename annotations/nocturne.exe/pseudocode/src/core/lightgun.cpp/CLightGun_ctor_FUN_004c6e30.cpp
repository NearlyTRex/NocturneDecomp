// Name: core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30
// Address: 004c6e30
// Address Range: [[004c6e30, 004c6ee5]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(CLightGun *this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(CLightGun *this_ptr)

{
  float fVar1;
  float fVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_00553d90(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CLightGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&(pCVar3->base).model,"cre.kfm");
  pCVar3->sfx_handle = 0;
  pCVar3->fire_flash_pending = 0;
  (pCVar3->base).is_spread_weapon = 0;
  (pCVar3->base).fire_mode = 0;
  (pCVar3->base).weapon_type = WEAPON_TYPE_LIGHT_GUN;
  (pCVar3->base).can_penetrate = 0;
  (pCVar3->base).bolt_velocity = 32.0;
  (pCVar3->base).fire_cooldown = 1;
  fVar1 = 8.0f;
  (pCVar3->base).can_attach_light = 0;
  fVar2 = 30.0f;
  pCVar3->hit_enemy = 0;
  pCVar3->charge_ratio = 1.0;
  (pCVar3->base).weight = fVar1;
  pCVar3->charge_level = fVar2;
  return pCVar3;
}
