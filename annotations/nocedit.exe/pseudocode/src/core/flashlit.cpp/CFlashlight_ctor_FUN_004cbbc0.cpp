// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc3f]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004cbbc0(CFlashlight *this_ptr)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004cbbc0(CFlashlight *this_ptr)

{
  float fVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CFlashlightVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar2->model,"flashlit.kfm");
  pCVar2->is_spread_weapon = 0;
  pCVar2->fire_mode = 0;
  pCVar2->weapon_type = 5;
  pCVar2->can_penetrate = 0;
  pCVar2->bolt_velocity = 0.0;
  fVar1 = 8.0f;
  pCVar2->fire_cooldown = 0.0;
  pCVar2->ammo_count = 0;
  pCVar2->unk3 = (int)fVar1;
  return (CFlashlight *)pCVar2;
}
