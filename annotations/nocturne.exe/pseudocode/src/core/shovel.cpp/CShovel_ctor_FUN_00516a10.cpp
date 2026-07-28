// Name: core_shovel.cpp_CShovel_ctor_FUN_00516a10
// Address: 00516a10
// Address Range: [[00516a10, 00516a8d]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00516a10(CWeapon *param_1)

#include "nocturne.h"

CWeapon * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00516a10(CWeapon *param_1)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar1->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a1c34;
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
  return pCVar1;
}
