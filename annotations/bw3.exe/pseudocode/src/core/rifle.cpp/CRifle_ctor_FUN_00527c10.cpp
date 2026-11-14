// Name: core_rifle.cpp_CRifle_ctor_FUN_00527c10
// Address: 00527c10
// Address Range: [[00527c10, 00527c99]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_CRifle_ctor_FUN_00527c10(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CRifle * __cdecl core_rifle_cpp_CRifle_ctor_FUN_00527c10(CRifle *this_ptr)

{
  float fVar1;
  CRifle *pCVar2;
  
  pCVar2 = (CRifle *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CRifleVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar2->base).model,"delisle.kfm");
  pCVar2->spread_angle = 3.0;
  (pCVar2->base).is_spread_weapon = 2;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP|FIRE_MODE_SINGLE;
  (pCVar2->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 35.0;
  fVar1 = _DAT_005e386c;
  (pCVar2->base).fire_cooldown = 0;
  pCVar2->processed = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
