// Name: core_gun.cpp_CGun_ctor_FUN_004b2760
// Address: 004b2760
// Address Range: [[004b2760, 004b27bf]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004b2760(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004b2760(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar1->model,"gat.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = 1;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0;
  return (CGun *)pCVar1;
}
