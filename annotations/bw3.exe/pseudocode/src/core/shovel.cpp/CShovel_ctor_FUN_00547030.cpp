// Name: core_shovel.cpp_CShovel_ctor_FUN_00547030
// Address: 00547030
// Address Range: [[00547030, 005470ad]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00547030(CShovel *this_ptr)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00547030(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CShovelVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(&pCVar1->model,(char *)0x5d153e)
  ;
  pCVar1->weapon_type = WEAPON_TYPE_MELEE;
  *(uint *)&pCVar1->field_0x56c = 0xffffffff;
  *(uint *)&pCVar1->field_0x568 = 0;
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar1->can_penetrate = 0;
  pCVar1->bolt_velocity = 5.0;
  pCVar1->fire_cooldown = 0;
  return (CShovel *)pCVar1;
}
