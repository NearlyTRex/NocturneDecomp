// Name: core_shotgun.cpp_CShotgun_ctor_FUN_005615c0
// Address: 005615c0
// Address Range: [[005615c0, 00561649]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_005615c0(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_005615c0(CShotgun *this_ptr)

{
  float fVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CShotgunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&(pCVar2->base).model,(char *)0x5f1998);
  pCVar2->spread_angle = 10.0;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP;
  (pCVar2->base).weapon_type = WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = _DAT_006054dc;
  (pCVar2->base).fire_cooldown = 0;
  pCVar2->muzzle_flash_active = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
