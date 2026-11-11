// Name: core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0
// Address: 004103f0
// Address Range: [[004103f0, 0041048d]]
// Convention: unknown
// Signature: CBlunderbus * core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(CBlunderbus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBlunderbus * core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(CBlunderbus *this_ptr)

{
  float fVar1;
  CBlunderbus *pCVar2;
  
  pCVar2 = (CBlunderbus *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CBlunderbusVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar2->base).model,"blunderbus.kfm");
  pCVar2->spread_angle = 10.0;
  (pCVar2->base).is_spread_weapon = 1;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP;
  (pCVar2->base).weapon_type = WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 15.0;
  (pCVar2->base).ammo_per_shot = 5;
  (pCVar2->base).weapon_class = 0;
  fVar1 = _DAT_005dbcdc;
  (pCVar2->base).ammo_type = AMMO_TYPE_BULLET;
  (pCVar2->base).number_of_hands_needed = 2;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
