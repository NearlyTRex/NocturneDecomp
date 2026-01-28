// Name: core_lightgun.cpp_CLightGun_ctor_FUN_00505900
// Address: 00505900
// Address Range: [[00505900, 005059b5]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_00505900(CLightGun *this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_00505900(CLightGun *this_ptr)

{
  float fVar1;
  float fVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CLightGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar3->base).model,"cre.kfm");
  pCVar3->unk[4] = '\0';
  pCVar3->unk[5] = '\0';
  pCVar3->unk[6] = '\0';
  pCVar3->unk[7] = '\0';
  pCVar3->unk[0] = '\0';
  pCVar3->unk[1] = '\0';
  pCVar3->unk[2] = '\0';
  pCVar3->unk[3] = '\0';
  (pCVar3->base).unk1[0] = '\0';
  (pCVar3->base).unk1[1] = '\0';
  (pCVar3->base).unk1[2] = '\0';
  (pCVar3->base).unk1[3] = '\0';
  (pCVar3->base).unk1[4] = '\0';
  (pCVar3->base).unk1[5] = '\0';
  (pCVar3->base).unk1[6] = '\0';
  (pCVar3->base).unk1[7] = '\0';
  (pCVar3->base).unk1[8] = '\x02';
  (pCVar3->base).unk1[9] = '\0';
  (pCVar3->base).unk1[10] = '\0';
  (pCVar3->base).unk1[0xb] = '\0';
  (pCVar3->base).unk1[0xc] = '\0';
  (pCVar3->base).unk1[0xd] = '\0';
  (pCVar3->base).unk1[0xe] = '\0';
  (pCVar3->base).unk1[0xf] = '\0';
  (pCVar3->base).bolt_velocity = 32.0;
  (pCVar3->base).fire_cooldown = 1.4013e-45;
  fVar1 = 8.0f;
  (pCVar3->base).can_attach_light = 0;
  fVar2 = 30.0f;
  pCVar3->unk[0x10] = '\0';
  pCVar3->unk[0x11] = '\0';
  pCVar3->unk[0x12] = '\0';
  pCVar3->unk[0x13] = '\0';
  pCVar3->unk[0xc] = '\0';
  pCVar3->unk[0xd] = '\0';
  pCVar3->unk[0xe] = -0x80;
  pCVar3->unk[0xf] = '?';
  *(float *)((pCVar3->base).unk3 + 0x25f) = fVar1;
  *(float *)(pCVar3->unk + 8) = fVar2;
  return pCVar3;
}
