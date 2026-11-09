// Name: core_sps.cpp_CSps_ctor_FUN_00568210
// Address: 00568210
// Address Range: [[00568210, 00568283]]
// Convention: unknown
// Signature: CSps * core_sps_cpp_CSps_ctor_FUN_00568210(CSps *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSps * core_sps_cpp_CSps_ctor_FUN_00568210(CSps *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CSpsVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,(char *)0x5d5c63);
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 0;
  *(uint *)&pCVar1->field_0x2e4 = 1;
  *(uint *)&pCVar1->field_0x2e8 = 0x42480000;
  *(uint *)&pCVar1->field_0x56c = 0xffffffff;
  *(uint *)&pCVar1->field_0x574 = 3;
  *(uint *)&pCVar1->field_0x57c = 0;
  return (CSps *)pCVar1;
}
