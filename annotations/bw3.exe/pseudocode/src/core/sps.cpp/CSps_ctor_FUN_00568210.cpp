// Name: core_sps.cpp_CSps_ctor_FUN_00568210
// Address: 00568210
// Address Range: [[00568210, 00568283]]
// Convention: __cdecl
// Signature: CSps * __cdecl core_sps_cpp_CSps_ctor_FUN_00568210(CSps *this_ptr)

#include "nocturne.h"

CSps * __cdecl core_sps_cpp_CSps_ctor_FUN_00568210(CSps *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CSpsVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(&pCVar1->model,(char *)0x5d5c63)
  ;
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  pCVar1->ammo_type = AMMO_TYPE_NONE;
  pCVar1->weapon_class = 3;
  pCVar1->draw_crosshair = 0;
  return (CSps *)pCVar1;
}
