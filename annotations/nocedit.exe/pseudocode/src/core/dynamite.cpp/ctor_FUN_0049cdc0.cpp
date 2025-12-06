// Name: core_dynamite.cpp_ctor_FUN_0049cdc0
// Address: 0049cdc0
// Address Range: [[0049cdc0, 0049ce69]]
// Convention: __cdecl
// Signature: CDynamite * core_dynamite.cpp_ctor_FUN_0049cdc0(CDynamite * this_ptr)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_ctor_FUN_0049cdc0(CDynamite *this_ptr)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_weapon).base_actor.vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065d314;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar1->base_weapon).model,"dynamitestick.kfm");
  (pCVar1->base_weapon).field9_0x305[0x25f] = '\0';
  (pCVar1->base_weapon).field9_0x305[0x260] = '\0';
  (pCVar1->base_weapon).field9_0x305[0x261] = -0x80;
  (pCVar1->base_weapon).field9_0x305[0x262] = '?';
  pCVar1->field1_0x578[0xc] = '\0';
  pCVar1->field1_0x578[0xd] = '\0';
  pCVar1->field1_0x578[0xe] = '\0';
  pCVar1->field1_0x578[0xf] = '\0';
  *(uint *)(pCVar1->field1_0x578 + 8) = *(uint *)(pCVar1->field1_0x578 + 0xc);
  *(uint *)(pCVar1->field1_0x578 + 4) = *(uint *)(pCVar1->field1_0x578 + 8);
  pCVar1->field1_0x578[0] = '\0';
  pCVar1->field1_0x578[1] = '\0';
  pCVar1->field1_0x578[2] = -0x80;
  pCVar1->field1_0x578[3] = -0x41;
  (pCVar1->base_weapon).field3_0x2d8[0] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[1] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[2] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[3] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[4] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[5] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[6] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[7] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[8] = '\x03';
  (pCVar1->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xb] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xc] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar1->base_weapon).bolt_velocity = 200.0;
  (pCVar1->base_weapon).fire_cooldown = 0.0;
  (pCVar1->base_weapon).can_attach_light = 0;
  pCVar1->field1_0x578[0x10] = '\0';
  pCVar1->field1_0x578[0x11] = '\0';
  pCVar1->field1_0x578[0x12] = '\0';
  pCVar1->field1_0x578[0x13] = '\0';
  return pCVar1;
}
