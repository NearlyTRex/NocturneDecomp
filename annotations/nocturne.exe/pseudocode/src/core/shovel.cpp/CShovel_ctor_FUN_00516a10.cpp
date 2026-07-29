// Name: core_shovel.cpp_CShovel_ctor_FUN_00516a10
// Address: 00516a10
// Address Range: [[00516a10, 00516a8d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00516a10(CShovel *this_ptr)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00516a10(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CShovelVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar1->model,"shoveit.kfm");
  pCVar1->weapon_type = 7;
  pCVar1->ammo_type = -1;
  pCVar1->ammo_count = 0;
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = 0;
  pCVar1->can_penetrate = 0;
  pCVar1->bolt_velocity = 5.0;
  pCVar1->fire_cooldown = 0;
  return (CShovel *)pCVar1;
}
