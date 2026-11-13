// Name: core_rifle.cpp_CRifle_ctor_FUN_0053ff20
// Address: 0053ff20
// Address Range: [[0053ff20, 0053ffa9]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_CRifle_ctor_FUN_0053ff20(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CRifle * __cdecl core_rifle_cpp_CRifle_ctor_FUN_0053ff20(CRifle *this_ptr)

{
  float fVar1;
  CRifle *pCVar2;
  
  pCVar2 = (CRifle *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CRifleVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&(pCVar2->base).model,"delisle.kfm");
  pCVar2->spread_angle = 3.0;
  (pCVar2->base).is_spread_weapon = 2;
  (pCVar2->base).fire_mode = FIRE_MODE_PUMP|FIRE_MODE_SINGLE;
  (pCVar2->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 35.0;
  fVar1 = _DAT_00604afc;
  (pCVar2->base).fire_cooldown = 0;
  pCVar2->processed = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
