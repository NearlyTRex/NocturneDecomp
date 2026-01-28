// Name: core_flamegun.cpp_CFlashlight_ctor_FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc3f]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flamegun_cpp_CFlashlight_ctor_FUN_004cbbc0(CFlashlight *this_ptr)

#include "nocturne.h"

CFlashlight * __cdecl core_flamegun_cpp_CFlashlight_ctor_FUN_004cbbc0(CFlashlight *this_ptr)

{
  float fVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CFlashlightVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar2->model,"flashlit.kfm");
  pCVar2->unk1[0] = '\0';
  pCVar2->unk1[1] = '\0';
  pCVar2->unk1[2] = '\0';
  pCVar2->unk1[3] = '\0';
  pCVar2->unk1[4] = '\0';
  pCVar2->unk1[5] = '\0';
  pCVar2->unk1[6] = '\0';
  pCVar2->unk1[7] = '\0';
  pCVar2->unk1[8] = '\x05';
  pCVar2->unk1[9] = '\0';
  pCVar2->unk1[10] = '\0';
  pCVar2->unk1[0xb] = '\0';
  pCVar2->unk1[0xc] = '\0';
  pCVar2->unk1[0xd] = '\0';
  pCVar2->unk1[0xe] = '\0';
  pCVar2->unk1[0xf] = '\0';
  pCVar2->bolt_velocity = 0.0;
  fVar1 = 8.0f;
  pCVar2->fire_cooldown = 0.0;
  pCVar2->ammo_count = 0;
  *(float *)(pCVar2->unk3 + 0x25f) = fVar1;
  return (CFlashlight *)pCVar2;
}
