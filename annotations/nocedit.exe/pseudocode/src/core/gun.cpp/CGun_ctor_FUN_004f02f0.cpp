// Name: core_gun.cpp_CGun_ctor_FUN_004f02f0
// Address: 004f02f0
// Address Range: [[004f02f0, 004f034f]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004f02f0(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004f02f0(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar1->model,"gat.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = 1;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0.0;
  return (CGun *)pCVar1;
}
