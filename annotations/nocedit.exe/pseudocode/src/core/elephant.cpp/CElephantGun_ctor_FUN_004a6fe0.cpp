// Name: core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0
// Address: 004a6fe0
// Address Range: [[004a6fe0, 004a7069]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun *this_ptr)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun *this_ptr)

{
  float fVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CElephantGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"elephantgun.kfm");
  pCVar2->unk[0] = '\0';
  pCVar2->unk[1] = '\0';
  pCVar2->unk[2] = ' ';
  pCVar2->unk[3] = 'A';
  (pCVar2->base).unk1[0] = '\x01';
  (pCVar2->base).unk1[1] = '\0';
  (pCVar2->base).unk1[2] = '\0';
  (pCVar2->base).unk1[3] = '\0';
  (pCVar2->base).unk1[4] = '\x02';
  (pCVar2->base).unk1[5] = '\0';
  (pCVar2->base).unk1[6] = '\0';
  (pCVar2->base).unk1[7] = '\0';
  (pCVar2->base).unk1[8] = '\x01';
  (pCVar2->base).unk1[9] = '\0';
  (pCVar2->base).unk1[10] = '\0';
  (pCVar2->base).unk1[0xb] = '\0';
  (pCVar2->base).unk1[0xc] = '\x01';
  (pCVar2->base).unk1[0xd] = '\0';
  (pCVar2->base).unk1[0xe] = '\0';
  (pCVar2->base).unk1[0xf] = '\0';
  (pCVar2->base).bolt_velocity = 15.0;
  fVar1 = 8.0f;
  (pCVar2->base).fire_cooldown = 0.0;
  pCVar2->unk[4] = '\0';
  pCVar2->unk[5] = '\0';
  pCVar2->unk[6] = '\0';
  pCVar2->unk[7] = '\0';
  *(float *)((pCVar2->base).unk3 + 0x25f) = fVar1;
  return pCVar2;
}
