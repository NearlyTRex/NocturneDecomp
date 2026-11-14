// Name: core_lightgun.cpp_CLightGun_ctor_FUN_004e2a20
// Address: 004e2a20
// Address Range: [[004e2a20, 004e2adf]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20(CLightGun *this_ptr)

{
  float fVar1;
  float fVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CLightGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar3->base).model,(char *)0x5dbffc);
  pCVar3->sfx_handle = 0;
  pCVar3->fire_flash_pending = 0;
  (pCVar3->base).is_spread_weapon = 0;
  (pCVar3->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar3->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_DYNAMITE;
  (pCVar3->base).can_penetrate = 0;
  (pCVar3->base).bolt_velocity = 32.0;
  (pCVar3->base).fire_cooldown = 1;
  *(uint *)&pCVar3->field_0x6e8 = 1;
  fVar1 = _DAT_005f95cc;
  (pCVar3->base).can_attach_light = 0;
  fVar2 = _DAT_005f95d0;
  pCVar3->hit_enemy = 0;
  pCVar3->charge_ratio = 1.0;
  (pCVar3->base).weight = fVar1;
  pCVar3->charge_level = fVar2;
  return pCVar3;
}
