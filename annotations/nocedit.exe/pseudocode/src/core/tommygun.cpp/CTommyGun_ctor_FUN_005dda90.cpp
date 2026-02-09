// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
// Address: 005dda90
// Address Range: [[005dda90, 005ddb23]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)

{
  float fVar1;
  CTommyGun *pCVar2;
  
  pCVar2 = (CTommyGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"tommygun.kfm");
  (pCVar2->base).unk1[0] = '\0';
  (pCVar2->base).unk1[1] = '\0';
  (pCVar2->base).unk1[2] = '\0';
  (pCVar2->base).unk1[3] = '\0';
  (pCVar2->base).unk1[4] = '\0';
  (pCVar2->base).unk1[5] = '\0';
  (pCVar2->base).unk1[6] = '\0';
  (pCVar2->base).unk1[7] = '\0';
  (pCVar2->base).unk1[8] = '\x04';
  (pCVar2->base).unk1[9] = '\0';
  (pCVar2->base).unk1[10] = '\0';
  (pCVar2->base).unk1[0xb] = '\0';
  (pCVar2->base).unk1[0xc] = '\x01';
  (pCVar2->base).unk1[0xd] = '\0';
  (pCVar2->base).unk1[0xe] = '\0';
  (pCVar2->base).unk1[0xf] = '\0';
  (pCVar2->base).bolt_velocity = 100.0;
  (pCVar2->base).fire_cooldown = 1.4013e-45;
  pCVar2->sfx_handle = 0;
  fVar1 = 8.0f;
  pCVar2->unk2 = 0;
  pCVar2->unk = 0;
  *(float *)((pCVar2->base).unk3 + 0x25c) = fVar1;
  return pCVar2;
}
