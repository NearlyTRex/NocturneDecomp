// Name: core_gun.cpp_CGun_ctor_FUN_004e85d0
// Address: 004e85d0
// Address Range: [[004e85d0, 004e862f]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004e85d0(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004e85d0(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&pCVar1->model,"gat.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_SINGLE;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0;
  return (CGun *)pCVar1;
}
