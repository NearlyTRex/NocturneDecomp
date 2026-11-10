// Name: core_shovel.cpp_CShovel_ctor_FUN_00562410
// Address: 00562410
// Address Range: [[00562410, 0056248d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00562410(CShovel *this_ptr)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00562410(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CShovelVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(&pCVar1->model,(char *)0x5f1a13)
  ;
  pCVar1->weapon_type = WEAPON_TYPE_MELEE;
  pCVar1->ammo_type = AMMO_TYPE_NONE;
  pCVar1->ammo_count = 0;
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar1->can_penetrate = 0;
  pCVar1->bolt_velocity = 5.0;
  pCVar1->fire_cooldown = 0;
  return (CShovel *)pCVar1;
}
