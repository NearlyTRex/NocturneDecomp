// Name: core_rifle.cpp_CRifle_ctor_FUN_00527c10
// Address: 00527c10
// Address Range: [[00527c10, 00527c99]]
// Convention: unknown
// Signature: CRifle * core_rifle_cpp_CRifle_ctor_FUN_00527c10(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRifle * core_rifle_cpp_CRifle_ctor_FUN_00527c10(CRifle *this_ptr)

{
  uint uVar1;
  CRifle *pCVar2;
  
  pCVar2 = (CRifle *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  ((UActorVTable *)&pCVar2->field_0x154)->_ub = &g_CRifleVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"delisle.kfm");
  *(uint *)&pCVar2->field_0x594 = 0x40400000;
  *(int *)&pCVar2->field_0x2d8 = 2;
  *(EFireMode *)&pCVar2->field_0x2dc = FIRE_MODE_PUMP|FIRE_MODE_SINGLE;
  *(EWeaponType *)&pCVar2->field_0x2e0 = WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN;
  *(int *)&pCVar2->field_0x2e4 = 1;
  *(float *)&pCVar2->field_0x2e8 = 35.0;
  uVar1 = _DAT_005e386c;
  *(int *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x598 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
