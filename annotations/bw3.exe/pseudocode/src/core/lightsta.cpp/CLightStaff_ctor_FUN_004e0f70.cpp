// Name: core_lightsta.cpp_CLightStaff_ctor_FUN_004e0f70
// Address: 004e0f70
// Address Range: [[004e0f70, 004e106b]]
// Convention: unknown
// Signature: CLightStaff * core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(CLightStaff *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightStaff * core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(CLightStaff *this_ptr)

{
  float fVar1;
  CLightStaff *pCVar2;
  
  pCVar2 = (CLightStaff *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CLightStaffVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar2->base).model,(char *)0x5c69c6);
  (pCVar2->base).is_spread_weapon = 0;
  (pCVar2->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar2->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN;
  (pCVar2->base).can_penetrate = 0;
  (pCVar2->base).bolt_velocity = 32.0;
  (pCVar2->base).fire_cooldown = 0;
  (pCVar2->base).ammo_type = AMMO_TYPE_MANA;
  (pCVar2->base).ammo_per_shot = 10;
  (pCVar2->base).weapon_class = 1;
  pCVar2->chain_active = 0;
  (pCVar2->base).draw_crosshair = 0;
  (pCVar2->base).number_of_hands_needed = 2;
  pCVar2->flicker_timer = 0.1;
  fVar1 = _DAT_005e24ec;
  pCVar2->flicker_frame = 0;
  pCVar2->sfx_handle = 0;
  (pCVar2->base).weight = fVar1;
  (pCVar2->globe).intensity_multiplier = 0x8000;
  (pCVar2->globe).intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(&pCVar2->globe,8.0);
  (pCVar2->globe).corona_mode = 1;
  return pCVar2;
}
