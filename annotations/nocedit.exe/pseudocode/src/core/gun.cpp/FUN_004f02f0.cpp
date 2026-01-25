// Name: core_gun.cpp_FUN_004f02f0
// Address: 004f02f0
// Address Range: [[004f02f0, 004f034f]]
// Convention: __cdecl
// Signature: CGun * core_gun.cpp_FUN_004f02f0(CGun * this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_FUN_004f02f0(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_actor).vtable._ub = &PTR_core_weapon_cpp_ActorModelSomething_FUN_005edff0_0065f2a4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar1->model,"gat.kfm");
  pCVar1->field3_0x2d8[0] = '\0';
  pCVar1->field3_0x2d8[1] = '\0';
  pCVar1->field3_0x2d8[2] = '\0';
  pCVar1->field3_0x2d8[3] = '\0';
  pCVar1->field3_0x2d8[4] = '\x01';
  pCVar1->field3_0x2d8[5] = '\0';
  pCVar1->field3_0x2d8[6] = '\0';
  pCVar1->field3_0x2d8[7] = '\0';
  pCVar1->field3_0x2d8[0xc] = '\x01';
  pCVar1->field3_0x2d8[0xd] = '\0';
  pCVar1->field3_0x2d8[0xe] = '\0';
  pCVar1->field3_0x2d8[0xf] = '\0';
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0.0;
  return (CGun *)pCVar1;
}
