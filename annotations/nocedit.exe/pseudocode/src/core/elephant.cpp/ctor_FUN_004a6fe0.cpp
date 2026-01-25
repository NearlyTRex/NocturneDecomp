// Name: core_elephant.cpp_ctor_FUN_004a6fe0
// Address: 004a6fe0
// Address Range: [[004a6fe0, 004a7069]]
// Convention: __cdecl
// Signature: CElephantGun * core_elephant.cpp_ctor_FUN_004a6fe0(CElephantGun * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_ctor_FUN_004a6fe0(CElephantGun *this_ptr)

{
  uint uVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.vtable._ub =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065d534;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base_weapon).model,"elephantgun.kfm");
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
  uVar1 = _DAT_0065d52c;
  (pCVar2->base_weapon).fire_cooldown = 0.0;
  pCVar2->field1_0x578[4] = '\0';
  pCVar2->field1_0x578[5] = '\0';
  pCVar2->field1_0x578[6] = '\0';
  pCVar2->field1_0x578[7] = '\0';
  *(uint *)((pCVar2->base_weapon).field9_0x305 + 0x25f) = uVar1;
  return pCVar2;
}
