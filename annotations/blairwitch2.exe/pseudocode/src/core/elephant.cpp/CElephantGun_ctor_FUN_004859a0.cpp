// Name: core_elephant.cpp_CElephantGun_ctor_FUN_004859a0
// Address: 004859a0
// Address Range: [[004859a0, 00485a29]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004859a0(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004859a0(CElephantGun *this_ptr)

{
  float fVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CElephantGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,"elephantgun.kfm");
  pCVar2->spread_angle = 10.0;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP;
  (pCVar2->base).weapon_type = WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = _DAT_005f5dec;
  (pCVar2->base).fire_cooldown = 0;
  pCVar2->muzzle_flash_active = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
