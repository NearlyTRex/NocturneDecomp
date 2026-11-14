// Name: core_gun.cpp_CGun_ctor_FUN_004d0f60
// Address: 004d0f60
// Address Range: [[004d0f60, 004d0fbf]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004d0f60(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004d0f60(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(&pCVar1->model,(char *)0x5c49cc)
  ;
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_SINGLE;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0;
  return (CGun *)pCVar1;
}
