// Name: core_lightgun.cpp_FUN_00505900
// Address: 00505900
// Address Range: [[00505900, 005059b5]]
// Convention: __cdecl
// Signature: CLightGun * core_lightgun.cpp_FUN_00505900(CLightGun * this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_FUN_00505900(CLightGun *this_ptr)

{
  float fVar1;
  float fVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar3->base_weapon).base_actor.vtable._ub =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_00660a64;
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
  fVar1 = 8.0f;
  (pCVar3->base_weapon).can_attach_light = 0;
  fVar2 = 30.0f;
  pCVar3->field1_0x578[0x10] = '\0';
  pCVar3->field1_0x578[0x11] = '\0';
  pCVar3->field1_0x578[0x12] = '\0';
  pCVar3->field1_0x578[0x13] = '\0';
  pCVar3->field1_0x578[0xc] = '\0';
  pCVar3->field1_0x578[0xd] = '\0';
  pCVar3->field1_0x578[0xe] = -0x80;
  pCVar3->field1_0x578[0xf] = '?';
  *(float *)((pCVar3->base_weapon).field9_0x305 + 0x25f) = fVar1;
  *(float *)(pCVar3->field1_0x578 + 8) = fVar2;
  return pCVar3;
}
