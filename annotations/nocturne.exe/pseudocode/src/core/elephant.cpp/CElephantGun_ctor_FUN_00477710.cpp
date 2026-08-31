// Name: core_elephant.cpp_CElephantGun_ctor_FUN_00477710
// Address: 00477710
// Address Range: [[00477710, 00477799]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_00477710(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_00477710(CElephantGun *this_ptr)

{
  float fVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_00553d90(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CElephantGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&(pCVar2->base).model,"elephantgun.kfm");
  pCVar2->spread_angle = 10.0;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = 2;
  (pCVar2->base).weapon_type = WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = _DAT_0059cb2c;
  (pCVar2->base).fire_cooldown = 0;
  pCVar2->muzzle_flash_active = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
