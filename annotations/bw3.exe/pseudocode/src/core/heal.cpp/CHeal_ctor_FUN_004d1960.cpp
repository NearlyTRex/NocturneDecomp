// Name: core_heal.cpp_CHeal_ctor_FUN_004d1960
// Address: 004d1960
// Address Range: [[004d1960, 004d1a05]]
// Convention: unknown
// Signature: CHeal * core_heal_cpp_CHeal_ctor_FUN_004d1960(CHeal *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHeal * core_heal_cpp_CHeal_ctor_FUN_004d1960(CHeal *this_ptr)

{
  CHeal *pCVar1;
  
  pCVar1 = (CHeal *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  ((UActorVTable *)&pCVar1->field_0x154)->_ub = &g_CHealVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"heal_stick.KFM");
  *(int *)&pCVar1->field_0x2d8 = 0;
  *(EFireMode *)&pCVar1->field_0x2dc = FIRE_MODE_AUTOMATIC;
  *(EWeaponType *)&pCVar1->field_0x2e0 = WEAPON_TYPE_BARON|WEAPON_TYPE_UNUSED;
  *(int *)&pCVar1->field_0x2e4 = 1;
  *(float *)&pCVar1->field_0x2e8 = 50.0;
  *(int *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x56c = 10;
  *(uint *)&pCVar1->field_0x58c = 0xf;
  *(uint *)&pCVar1->field_0x574 = 3;
  *(uint *)&pCVar1->field_0x57c = 0;
  *(uint *)&pCVar1->field_0x594 = 0;
  *(uint *)&pCVar1->field_0x598 = 0;
  return pCVar1;
}
