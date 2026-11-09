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
  *(byte **)&pCVar2->field_0x154 = &g_CRifleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"delisle.kfm");
  *(uint *)&pCVar2->field_0x594 = 0x40400000;
  *(uint *)&pCVar2->field_0x2d8 = 2;
  *(uint *)&pCVar2->field_0x2dc = 3;
  *(uint *)&pCVar2->field_0x2e0 = 9;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x420c0000;
  uVar1 = _DAT_005e386c;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x598 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
