// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550
// Address: 004a7550
// Address Range: [[004a7550, 004a75cf]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(CFlashlight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(CFlashlight *this_ptr)

{
  float fVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CFlashlightVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar2->model,"flashlit.kfm");
  pCVar2->is_spread_weapon = 0;
  pCVar2->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar2->weapon_type = WEAPON_TYPE_FLASHLIGHT;
  pCVar2->can_penetrate = 0;
  pCVar2->bolt_velocity = 0.0;
  fVar1 = _DAT_005e008c;
  pCVar2->fire_cooldown = 0;
  pCVar2->ammo_count = 0;
  pCVar2->weight = fVar1;
  return (CFlashlight *)pCVar2;
}
