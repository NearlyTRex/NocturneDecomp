// Name: core_elephant.cpp_CElephantGun_ctor_FUN_00486ba0
// Address: 00486ba0
// Address Range: [[00486ba0, 00486c29]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_00486ba0(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_00486ba0(CElephantGun *this_ptr)

{
  uint uVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CElephantGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar2->base).model,"elephantgun.kfm");
  *(uint *)&pCVar2->field_0x594 = 0x41200000;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP;
  (pCVar2->base).weapon_type = WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  uVar1 = _DAT_005df0fc;
  (pCVar2->base).fire_cooldown = 0;
  *(uint *)&pCVar2->field_0x598 = 0;
  *(uint *)&(pCVar2->base).field_0x564 = uVar1;
  return pCVar2;
}
