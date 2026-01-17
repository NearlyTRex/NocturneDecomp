// Name: core_lightgun.cpp_FUN_00505900
// Address: 00505900
// Address Range: [[00505900, 005059b5]]
// Convention: __cdecl
// Signature: CLightGun * core_lightgun.cpp_FUN_00505900(CLightGun * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CLightGun * __cdecl core_lightgun_cpp_FUN_00505900(CLightGun *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar3->base_weapon).base_actor.vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_00660a64;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar3->base_weapon).model,"cre.kfm");
  pCVar3->field1_0x578[4] = '\0';
  pCVar3->field1_0x578[5] = '\0';
  pCVar3->field1_0x578[6] = '\0';
  pCVar3->field1_0x578[7] = '\0';
  pCVar3->field1_0x578[0] = '\0';
  pCVar3->field1_0x578[1] = '\0';
  pCVar3->field1_0x578[2] = '\0';
  pCVar3->field1_0x578[3] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[1] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[2] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[3] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[4] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[5] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[6] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[7] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[8] = '\x02';
  (pCVar3->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xb] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xc] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar3->base_weapon).bolt_velocity = 32.0;
  (pCVar3->base_weapon).fire_cooldown = 1.4013e-45;
  uVar1 = _DAT_00660a3c;
  (pCVar3->base_weapon).can_attach_light = 0;
  uVar2 = 0x41F00000;
  pCVar3->field1_0x578[0x10] = '\0';
  pCVar3->field1_0x578[0x11] = '\0';
  pCVar3->field1_0x578[0x12] = '\0';
  pCVar3->field1_0x578[0x13] = '\0';
  pCVar3->field1_0x578[0xc] = '\0';
  pCVar3->field1_0x578[0xd] = '\0';
  pCVar3->field1_0x578[0xe] = -0x80;
  pCVar3->field1_0x578[0xf] = '?';
  *(uint *)((pCVar3->base_weapon).field9_0x305 + 0x25f) = uVar1;
  *(uint *)(pCVar3->field1_0x578 + 8) = uVar2;
  return pCVar3;
}
