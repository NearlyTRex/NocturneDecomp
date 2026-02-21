// Name: core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0
// Address: 004a6fe0
// Address Range: [[004a6fe0, 004a7069]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun *this_ptr)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun *this_ptr)

{
  float fVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CElephantGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"elephantgun.kfm");
  pCVar2->spread_angle = 10.0;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = 2;
  (pCVar2->base).weapon_type = 1;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = 8.0f;
  (pCVar2->base).fire_cooldown = 0.0;
  pCVar2->muzzle_flash_active = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
