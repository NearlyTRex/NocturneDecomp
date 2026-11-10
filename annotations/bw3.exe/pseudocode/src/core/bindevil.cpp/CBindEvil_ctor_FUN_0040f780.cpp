// Name: core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780
// Address: 0040f780
// Address Range: [[0040f780, 0040f83d]]
// Convention: unknown
// Signature: CBindEvil * core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780(CBindEvil *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBindEvil * core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780(CBindEvil *this_ptr)

{
  CBindEvil *pCVar1;
  
  pCVar1 = (CBindEvil *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  ((UActorVTable *)&pCVar1->field_0x154)->_ub = &g_CBindEvilVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,(char *)0x5b6321);
  *(int *)&pCVar1->field_0x2d8 = 0;
  *(EFireMode *)&pCVar1->field_0x2dc = FIRE_MODE_AUTOMATIC;
  *(EWeaponType *)&pCVar1->field_0x2e0 = WEAPON_TYPE_DYNAMITE;
  *(int *)&pCVar1->field_0x2e4 = 1;
  *(float *)&pCVar1->field_0x2e8 = 50.0;
  *(int *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x56c = 10;
  *(uint *)&pCVar1->field_0x58c = 0x14;
  *(uint *)&pCVar1->field_0x574 = 4;
  *(uint *)&pCVar1->field_0x59c = 0;
  *(uint *)&pCVar1->field_0x598 = *(uint *)&pCVar1->field_0x59c;
  *(uint *)&pCVar1->field_0x594 = *(uint *)&pCVar1->field_0x598;
  *(uint *)&pCVar1->field_0x590 = 1;
  *(uint *)&pCVar1->field_0x578 = 2;
  *(uint *)&pCVar1->field_0x57c = 0;
  return pCVar1;
}
