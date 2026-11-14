// Name: core_gun.cpp_CGun_ctor_FUN_004cbd50
// Address: 004cbd50
// Address Range: [[004cbd50, 004cbdb9]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004cbd50(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004cbd50(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&pCVar1->model,"revolver.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_SINGLE;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0;
  pCVar1->ammo_count = 6;
  return (CGun *)pCVar1;
}
