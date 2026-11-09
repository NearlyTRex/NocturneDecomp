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
  *(byte **)&pCVar1->field_0x154 = &g_CStormVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"rainvial.kfm");
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 0;
  *(uint *)&pCVar1->field_0x2e0 = 0xd;
  *(uint *)&pCVar1->field_0x2e4 = 1;
  *(uint *)&pCVar1->field_0x2e8 = 0x42480000;
  *(uint *)&pCVar1->field_0x56c = 10;
  *(uint *)&pCVar1->field_0x58c = 0x23;
  *(uint *)&pCVar1->field_0x574 = 3;
  *(uint *)&pCVar1->field_0x57c = 0;
  *(uint *)&pCVar1->field_0x578 = 2;
  return (CStorm *)pCVar1;
}
