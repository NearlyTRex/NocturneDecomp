// Name: core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
// Address: 00587ee0
// Address Range: [[00587ee0, 00587f69]]
// Convention: __cdecl
// Signature: CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0(CShotgun * this_ptr)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(CShotgun *this_ptr)

{
  float fVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CShotgunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base).model,"shotgun.kfm");
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
