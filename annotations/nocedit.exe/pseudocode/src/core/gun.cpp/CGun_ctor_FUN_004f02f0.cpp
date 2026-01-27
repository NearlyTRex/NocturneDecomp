// Name: core_gun.cpp_CGun_ctor_FUN_004f02f0
// Address: 004f02f0
// Address Range: [[004f02f0, 004f034f]]
// Convention: __cdecl
// Signature: CGun * core_gun.cpp_CGun_ctor_FUN_004f02f0(CGun * this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004f02f0(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar1->model,"gat.kfm");
  pCVar1->unk1[0] = '\0';
  pCVar1->unk1[1] = '\0';
  pCVar1->unk1[2] = '\0';
  pCVar1->unk1[3] = '\0';
  pCVar1->unk1[4] = '\x01';
  pCVar1->unk1[5] = '\0';
  pCVar1->unk1[6] = '\0';
  pCVar1->unk1[7] = '\0';
  pCVar1->unk1[0xc] = '\x01';
  pCVar1->unk1[0xd] = '\0';
  pCVar1->unk1[0xe] = '\0';
  pCVar1->unk1[0xf] = '\0';
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0.0;
  return (CGun *)pCVar1;
}
