// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_00575760
// Address: 00575760
// Address Range: [[00575760, 005757f3]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(CTommyGun *this_ptr)

{
  float fVar1;
  CTommyGun *pCVar2;
  
  pCVar2 = (CTommyGun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CTommyGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,"tommygun.kfm");
  (pCVar2->base).is_spread_weapon = 0;
  (pCVar2->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar2->base).weapon_type = WEAPON_TYPE_TOMMY_GUN;
  (pCVar2->base).can_penetrate = 1;
  (pCVar2->base).bolt_velocity = 100.0;
  (pCVar2->base).fire_cooldown = 1;
  pCVar2->sfx_handles[0] = 0;
  fVar1 = _DAT_005fce6c;
  pCVar2->sfx_handles[1] = 0;
  pCVar2->fire_frames_remaining = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
