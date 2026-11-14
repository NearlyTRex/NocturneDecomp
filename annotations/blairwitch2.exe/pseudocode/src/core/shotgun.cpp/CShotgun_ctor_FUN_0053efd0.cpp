// Name: core_shotgun.cpp_CShotgun_ctor_FUN_0053efd0
// Address: 0053efd0
// Address Range: [[0053efd0, 0053f059]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(CShotgun *this_ptr)

{
  float fVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CShotgunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,(char *)0x5e67c6);
  pCVar2->spread_angle = 10.0;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP;
  (pCVar2->base).weapon_type = WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = _DAT_005fb5bc;
  (pCVar2->base).fire_cooldown = 0;
  pCVar2->muzzle_flash_active = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
