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
  *(byte **)&pCVar1->field_0x154 = &g_CHolycrossVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"holycross.kfm");
  *(uint *)&pCVar1->field_0x2e0 = 7;
  *(uint *)&pCVar1->field_0x56c = 0xffffffff;
  *(uint *)&pCVar1->field_0x568 = 0;
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 0;
  *(uint *)&pCVar1->field_0x2e4 = 0;
  *(uint *)&pCVar1->field_0x2e8 = 0x40a00000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x57c = 0;
  *(uint *)&pCVar1->field_0x574 = 1;
  *(uint *)&pCVar1->field_0x578 = 2;
  return (CHolycross *)pCVar1;
}
