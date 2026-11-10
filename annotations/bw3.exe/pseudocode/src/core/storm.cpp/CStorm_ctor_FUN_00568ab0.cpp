// Name: core_storm.cpp_CStorm_ctor_FUN_00568ab0
// Address: 00568ab0
// Address Range: [[00568ab0, 00568b41]]
// Convention: unknown
// Signature: CStorm * core_storm_cpp_CStorm_ctor_FUN_00568ab0(CStorm *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStorm * core_storm_cpp_CStorm_ctor_FUN_00568ab0(CStorm *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  (pCVar1->base).vtable._ub = &g_CStormVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"rainvial.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_AUTOMATIC;
  pCVar1->weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  *(uint *)&pCVar1->field_0x56c = 10;
  *(uint *)&pCVar1->field_0x58c = 0x23;
  *(uint *)&pCVar1->field_0x574 = 3;
  *(uint *)&pCVar1->field_0x57c = 0;
  *(uint *)&pCVar1->field_0x578 = 2;
  return (CStorm *)pCVar1;
}
