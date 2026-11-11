// Name: core_exorcism.cpp_CExorcism_ctor_FUN_0048a310
// Address: 0048a310
// Address Range: [[0048a310, 0048a41b]]
// Convention: unknown
// Signature: CExorcism * core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(CExorcism *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CExorcism * core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(CExorcism *this_ptr)

{
  CExorcism *pCVar1;
  
  pCVar1 = (CExorcism *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CExorcismVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&(pCVar1->base).model,"exo_bible.kfm");
  (pCVar1->base).is_spread_weapon = 0;
  (pCVar1->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar1->base).can_penetrate = 1;
  (pCVar1->base).bolt_velocity = 50.0;
  (pCVar1->base).fire_cooldown = 0;
  (pCVar1->base).ammo_type = AMMO_TYPE_MANA;
  (pCVar1->base).ammo_per_shot = 1;
  (pCVar1->base).weapon_class = 2;
  pCVar1->was_firing_prev_frame = 0;
  pCVar1->is_firing = 0;
  pCVar1->target = (CCharacter *)0x0;
  pCVar1->zap_timer = 0.0;
  pCVar1->globes[0].intensity_multiplier = 0x8000;
  pCVar1->globes[0].intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar1->globes,8.0);
  pCVar1->globes[0].corona_mode = 1;
  pCVar1->globes[1].intensity_multiplier = 0x8000;
  pCVar1->globes[1].intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar1->globes + 1,8.0);
  pCVar1->globes[1].corona_mode = 1;
  (pCVar1->base).draw_crosshair = 0;
  pCVar1->fire_cooldown = 0.0;
  return pCVar1;
}
