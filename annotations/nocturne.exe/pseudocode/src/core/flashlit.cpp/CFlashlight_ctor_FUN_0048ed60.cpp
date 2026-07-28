// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60
// Address: 0048ed60
// Address Range: [[0048ed60, 0048eddf]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWeapon * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(CWeapon *param_1)

{
  float fVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar2->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059d8f4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar2->model,"flashlit.kfm");
  pCVar2->is_spread_weapon = 0;
  pCVar2->fire_mode = 0;
  pCVar2->weapon_type = 5;
  pCVar2->can_penetrate = 0;
  pCVar2->bolt_velocity = 0.0;
  fVar1 = _DAT_0059d8ec;
  pCVar2->fire_cooldown = 0;
  pCVar2->ammo_count = 0;
  pCVar2->weight = fVar1;
  return pCVar2;
}
