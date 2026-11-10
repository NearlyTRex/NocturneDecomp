// Name: core_holycrss.cpp_CHolycross_ctor_FUN_004d50d0
// Address: 004d50d0
// Address Range: [[004d50d0, 004d516b]]
// Convention: unknown
// Signature: CHolycross * core_holycrss_cpp_CHolycross_ctor_FUN_004d50d0(CHolycross *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHolycross * core_holycrss_cpp_CHolycross_ctor_FUN_004d50d0(CHolycross *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  (pCVar1->base).vtable._ub = &g_CHolycrossVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"holycross.kfm");
  pCVar1->weapon_type = WEAPON_TYPE_MELEE;
  *(uint *)&pCVar1->field_0x56c = 0xffffffff;
  *(uint *)&pCVar1->field_0x568 = 0;
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar1->can_penetrate = 0;
  pCVar1->bolt_velocity = 5.0;
  pCVar1->fire_cooldown = 0;
  *(uint *)&pCVar1->field_0x57c = 0;
  *(uint *)&pCVar1->field_0x574 = 1;
  *(uint *)&pCVar1->field_0x578 = 2;
  return (CHolycross *)pCVar1;
}
