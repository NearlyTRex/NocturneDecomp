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
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.vtable._ub =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_00662a84;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base_weapon).model,"shotgun.kfm");
  pCVar2->field1_0x578[0] = '\0';
  pCVar2->field1_0x578[1] = '\0';
  pCVar2->field1_0x578[2] = ' ';
  pCVar2->field1_0x578[3] = 'A';
  (pCVar2->base_weapon).field3_0x2d8[0] = '\x01';
  (pCVar2->base_weapon).field3_0x2d8[1] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[2] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[3] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[4] = '\x02';
  (pCVar2->base_weapon).field3_0x2d8[5] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[6] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[7] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[8] = '\x01';
  (pCVar2->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xb] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xc] = '\x01';
  (pCVar2->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar2->base_weapon).bolt_velocity = 15.0;
  fVar1 = 8.0f;
  (pCVar2->base_weapon).fire_cooldown = 0.0;
  pCVar2->field1_0x578[4] = '\0';
  pCVar2->field1_0x578[5] = '\0';
  pCVar2->field1_0x578[6] = '\0';
  pCVar2->field1_0x578[7] = '\0';
  *(float *)((pCVar2->base_weapon).field9_0x305 + 0x25f) = fVar1;
  return pCVar2;
}
