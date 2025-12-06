// Name: core_flamegun.cpp_FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc3f]]
// Convention: __cdecl
// Signature: CFlashlight * core_flamegun.cpp_FUN_004cbbc0(CFlashlight * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flamegun_cpp_FUN_004cbbc0(CFlashlight *this_ptr)

{
  uint uVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_actor).vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065e3d4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar2->model,"flashlit.kfm");
  pCVar2->field3_0x2d8[0] = '\0';
  pCVar2->field3_0x2d8[1] = '\0';
  pCVar2->field3_0x2d8[2] = '\0';
  pCVar2->field3_0x2d8[3] = '\0';
  pCVar2->field3_0x2d8[4] = '\0';
  pCVar2->field3_0x2d8[5] = '\0';
  pCVar2->field3_0x2d8[6] = '\0';
  pCVar2->field3_0x2d8[7] = '\0';
  pCVar2->field3_0x2d8[8] = '\x05';
  pCVar2->field3_0x2d8[9] = '\0';
  pCVar2->field3_0x2d8[10] = '\0';
  pCVar2->field3_0x2d8[0xb] = '\0';
  pCVar2->field3_0x2d8[0xc] = '\0';
  pCVar2->field3_0x2d8[0xd] = '\0';
  pCVar2->field3_0x2d8[0xe] = '\0';
  pCVar2->field3_0x2d8[0xf] = '\0';
  pCVar2->bolt_velocity = 0.0;
  uVar1 = _DAT_0065e3cc;
  pCVar2->fire_cooldown = 0.0;
  pCVar2->ammo_count = 0;
  *(uint *)(pCVar2->field9_0x305 + 0x25f) = uVar1;
  return (CFlashlight *)pCVar2;
}
