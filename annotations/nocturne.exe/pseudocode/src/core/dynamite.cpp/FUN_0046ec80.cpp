// Name: core_dynamite.cpp_FUN_0046ec80
// Address: 0046ec80
// Address Range: [[0046ec80, 0046eced]]
// Convention: unknown
// Signature: undefined4 core_dynamite_cpp_FUN_0046ec80(CWeapon *param_1)

#include "nocturne.h"

uint core_dynamite_cpp_FUN_0046ec80(CWeapon *param_1)

{
  CVector3f *velocity;
  CWeapon *pCVar1;
  int iVar2;
  
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  velocity = (CVector3f *)(param_1[1].base.actor_name + 4);
  core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0
            (g_CFireEffect_PTR_005b80f0,&(param_1->base).location.position,&(param_1->base).orient,
             velocity,*(float *)param_1[1].base.actor_name,
             *(uint *)(param_1[1].base.actor_name + 0x10));
  pCVar1 = param_1 + 1;
  (pCVar1->base).actor_name[0x10] = '\0';
  (pCVar1->base).actor_name[0x11] = '\0';
  (pCVar1->base).actor_name[0x12] = '\0';
  (pCVar1->base).actor_name[0x13] = '\0';
  param_1[1].base.actor_name[0] = '\0';
  param_1[1].base.actor_name[1] = '\0';
  param_1[1].base.actor_name[2] = -0x80;
  param_1[1].base.actor_name[3] = -0x41;
  pCVar1 = param_1 + 1;
  (pCVar1->base).actor_name[0xc] = '\0';
  (pCVar1->base).actor_name[0xd] = '\0';
  (pCVar1->base).actor_name[0xe] = '\0';
  (pCVar1->base).actor_name[0xf] = '\0';
  *(uint *)(param_1[1].base.actor_name + 8) =
       *(uint *)(param_1[1].base.actor_name + 0xc);
  velocity->x = *(float *)(param_1[1].base.actor_name + 8);
  return 1;
}
