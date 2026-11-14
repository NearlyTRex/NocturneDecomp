// Name: core_flamegun.cpp_CFlameThrower_ctor_FUN_004a0d10
// Address: 004a0d10
// Address Range: [[004a0d10, 004a0dad]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10(CFlameThrower *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10(CFlameThrower *this_ptr)

{
  float fVar1;
  CFlameThrower *pCVar2;
  
  pCVar2 = (CFlameThrower *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CFlameThrowerVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar2->base).model,"flamegun.kfm");
  pCVar2->sfx_handle = 0;
  pCVar2->is_firing = 0;
  (pCVar2->base).is_spread_weapon = 0;
  (pCVar2->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar2->base).weapon_type = WEAPON_TYPE_LIGHT_GUN;
  (pCVar2->base).can_penetrate = 0;
  (pCVar2->base).bolt_velocity = 15.0;
  (pCVar2->base).fire_cooldown = 1;
  fVar1 = _DAT_005f6b4c;
  pCVar2->fire_rate_timer = 0.0;
  pCVar2->was_firing_prev_frame = 0;
  (pCVar2->base).weight = fVar1;
  return pCVar2;
}
