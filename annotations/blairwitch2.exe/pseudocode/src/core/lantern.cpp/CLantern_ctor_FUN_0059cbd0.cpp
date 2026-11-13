// Name: core_lantern.cpp_CLantern_ctor_FUN_0059cbd0
// Address: 0059cbd0
// Address Range: [[0059cbd0, 0059ccb3]]
// Convention: __cdecl
// Signature: CLantern * __cdecl core_lantern_cpp_CLantern_ctor_FUN_0059cbd0(CLantern *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CLantern * __cdecl core_lantern_cpp_CLantern_ctor_FUN_0059cbd0(CLantern *this_ptr)

{
  CKeyFramedModelInstance *this_ptr_00;
  CDemonLight *this_ptr_01;
  float fVar1;
  CLantern *pCVar2;
  
  pCVar2 = (CLantern *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  this_ptr_00 = &(pCVar2->base).model;
  (pCVar2->base).base.vtable._ub = &g_CLanternVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"lantern.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr_00);
  (pCVar2->base).is_spread_weapon = 0;
  (pCVar2->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar2->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN;
  (pCVar2->base).can_penetrate = 0;
  (pCVar2->base).bolt_velocity = 0.0;
  (pCVar2->base).fire_cooldown = 0;
  (pCVar2->base).ammo_count = 0;
  (pCVar2->base).is_rendered = 1;
  (pCVar2->base).base.is_transparent = 1;
  pCVar2->flicker_timer = 0.0;
  pCVar2->brightness = 0.0;
  pCVar2->flicker = 0.0;
  fVar1 = _DAT_005fe8dc;
  pCVar2->light = &g_CDemonLightInstance;
  this_ptr_01 = pCVar2->light;
  pCVar2->unused_6fc = 0;
  (pCVar2->base).weight = fVar1;
  core_dlight_cpp_CDemonLight_init_FUN_00449d90(this_ptr_01);
  return pCVar2;
}
