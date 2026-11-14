// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060
// Address: 004a1060
// Address Range: [[004a1060, 004a10df]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060(CFlashlight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060(CFlashlight *this_ptr)

{
  float fVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CFlashlightVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&pCVar2->model,"flashlit.kfm");
  pCVar2->is_spread_weapon = 0;
  pCVar2->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar2->weapon_type = WEAPON_TYPE_FLASHLIGHT;
  pCVar2->can_penetrate = 0;
  pCVar2->bolt_velocity = 0.0;
  fVar1 = _DAT_005f6cac;
  pCVar2->fire_cooldown = 0;
  pCVar2->ammo_count = 0;
  pCVar2->weight = fVar1;
  return (CFlashlight *)pCVar2;
}
