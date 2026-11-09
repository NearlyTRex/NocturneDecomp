// Name: core_rifle.cpp_CRifle_ctor_FUN_0053ff20
// Address: 0053ff20
// Address Range: [[0053ff20, 0053ffa9]]
// Convention: unknown
// Signature: CRifle * core_rifle_cpp_CRifle_ctor_FUN_0053ff20(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRifle * core_rifle_cpp_CRifle_ctor_FUN_0053ff20(CRifle *this_ptr)

{
  uint uVar1;
  CRifle *pCVar2;
  
  pCVar2 = (CRifle *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CRifleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"delisle.kfm");
  *(uint *)&pCVar2->field_0x578 = 0x40400000;
  *(uint *)&pCVar2->field_0x2d8 = 2;
  *(uint *)&pCVar2->field_0x2dc = 3;
  *(uint *)&pCVar2->field_0x2e0 = 9;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x420c0000;
  uVar1 = _DAT_00604afc;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x57c = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
