// Name: core_gun.cpp_FUN_004b2760
// Address: 004b2760
// Address Range: [[004b2760, 004b27bf]]
// Convention: unknown
// Signature: CWeapon * core_gun_cpp_FUN_004b2760(CWeapon *param_1)

#include "nocturne.h"

CWeapon * core_gun_cpp_FUN_004b2760(CWeapon *param_1)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar1->base).vtable._ub = &CWeapon_full_vtable_0059e744._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar1->model,"gat.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = 1;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0;
  return pCVar1;
}
