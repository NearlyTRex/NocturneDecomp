// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
// Address: 005dda90
// Address Range: [[005dda90, 005ddb23]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)

#include "nocturne.h"

int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)

{
  CWeapon *pCVar1;
  float fVar2;
  CWeapon *pCVar3;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar3->base).vtable._ub = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar3->model,"tommygun.kfm");
  pCVar3->unk1[0] = '\0';
  pCVar3->unk1[1] = '\0';
  pCVar3->unk1[2] = '\0';
  pCVar3->unk1[3] = '\0';
  pCVar3->unk1[4] = '\0';
  pCVar3->unk1[5] = '\0';
  pCVar3->unk1[6] = '\0';
  pCVar3->unk1[7] = '\0';
  pCVar3->unk1[8] = '\x04';
  pCVar3->unk1[9] = '\0';
  pCVar3->unk1[10] = '\0';
  pCVar3->unk1[0xb] = '\0';
  pCVar3->unk1[0xc] = '\x01';
  pCVar3->unk1[0xd] = '\0';
  pCVar3->unk1[0xe] = '\0';
  pCVar3->unk1[0xf] = '\0';
  pCVar3->bolt_velocity = 100.0;
  pCVar3->fire_cooldown = 1.4013e-45;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[4] = '\0';
  fVar2 = 8.0f;
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  pCVar3[1].base.actor_name[0] = '\0';
  pCVar3[1].base.actor_name[1] = '\0';
  pCVar3[1].base.actor_name[2] = '\0';
  pCVar3[1].base.actor_name[3] = '\0';
  *(float *)(pCVar3->unk3 + 0x25c) = fVar2;
  return (int)pCVar3;
}
