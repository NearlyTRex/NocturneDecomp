// Name: core_shovel.cpp_CShovel_ctor_FUN_00588ba0
// Address: 00588ba0
// Address Range: [[00588ba0, 00588c1d]]
// Convention: __cdecl
// Signature: CShovel * core_shovel.cpp_CShovel_ctor_FUN_00588ba0(CShovel * this_ptr)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00588ba0(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_actor).vtable._ub = &PTR_core_weapon_cpp_ActorModelSomething_FUN_00662bd4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar1->model,"shoveit.kfm");
  pCVar1->field3_0x2d8[8] = '\a';
  pCVar1->field3_0x2d8[9] = '\0';
  pCVar1->field3_0x2d8[10] = '\0';
  pCVar1->field3_0x2d8[0xb] = '\0';
  pCVar1->ammo_type = -1;
  pCVar1->ammo_count = 0;
  pCVar1->field3_0x2d8[0] = '\0';
  pCVar1->field3_0x2d8[1] = '\0';
  pCVar1->field3_0x2d8[2] = '\0';
  pCVar1->field3_0x2d8[3] = '\0';
  pCVar1->field3_0x2d8[4] = '\0';
  pCVar1->field3_0x2d8[5] = '\0';
  pCVar1->field3_0x2d8[6] = '\0';
  pCVar1->field3_0x2d8[7] = '\0';
  pCVar1->field3_0x2d8[0xc] = '\0';
  pCVar1->field3_0x2d8[0xd] = '\0';
  pCVar1->field3_0x2d8[0xe] = '\0';
  pCVar1->field3_0x2d8[0xf] = '\0';
  pCVar1->bolt_velocity = 5.0;
  pCVar1->fire_cooldown = 0.0;
  return (CShovel *)pCVar1;
}
