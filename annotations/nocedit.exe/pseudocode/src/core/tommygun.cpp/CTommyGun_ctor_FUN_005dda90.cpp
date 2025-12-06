// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
// Address: 005dda90
// Address Range: [[005dda90, 005ddb23]]
// Convention: __cdecl
// Signature: int core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)

{
  CWeapon *pCVar1;
  uint uVar2;
  CWeapon *pCVar3;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar3->base_actor).vtable = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar3->model,"tommygun.kfm");
  pCVar3->field3_0x2d8[0] = '\0';
  pCVar3->field3_0x2d8[1] = '\0';
  pCVar3->field3_0x2d8[2] = '\0';
  pCVar3->field3_0x2d8[3] = '\0';
  pCVar3->field3_0x2d8[4] = '\0';
  pCVar3->field3_0x2d8[5] = '\0';
  pCVar3->field3_0x2d8[6] = '\0';
  pCVar3->field3_0x2d8[7] = '\0';
  pCVar3->field3_0x2d8[8] = '\x04';
  pCVar3->field3_0x2d8[9] = '\0';
  pCVar3->field3_0x2d8[10] = '\0';
  pCVar3->field3_0x2d8[0xb] = '\0';
  pCVar3->field3_0x2d8[0xc] = '\x01';
  pCVar3->field3_0x2d8[0xd] = '\0';
  pCVar3->field3_0x2d8[0xe] = '\0';
  pCVar3->field3_0x2d8[0xf] = '\0';
  pCVar3->bolt_velocity = 100.0;
  pCVar3->fire_cooldown = 1.4013e-45;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base_actor).actor_name[4] = '\0';
  uVar2 = _DAT_0066466c;
  (pCVar1->base_actor).actor_name[5] = '\0';
  (pCVar1->base_actor).actor_name[6] = '\0';
  (pCVar1->base_actor).actor_name[7] = '\0';
  pCVar1 = pCVar3 + 1;
  (pCVar1->base_actor).actor_name[8] = '\0';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  pCVar3[1].base_actor.actor_name[0] = '\0';
  pCVar3[1].base_actor.actor_name[1] = '\0';
  pCVar3[1].base_actor.actor_name[2] = '\0';
  pCVar3[1].base_actor.actor_name[3] = '\0';
  *(uint *)(pCVar3->field9_0x305 + 0x25f) = uVar2;
  return (int)pCVar3;
}
