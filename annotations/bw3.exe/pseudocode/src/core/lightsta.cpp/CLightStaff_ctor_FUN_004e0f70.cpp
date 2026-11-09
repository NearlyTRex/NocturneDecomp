// Name: core_lightsta.cpp_CLightStaff_ctor_FUN_004e0f70
// Address: 004e0f70
// Address Range: [[004e0f70, 004e106b]]
// Convention: unknown
// Signature: CLightStaff * core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(CLightStaff *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightStaff * core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(CLightStaff *this_ptr)

{
  uint uVar1;
  CLightStaff *pCVar2;
  
  pCVar2 = (CLightStaff *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CLightStaffVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,(char *)0x5c69c6);
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e0 = 0xc;
  *(uint *)&pCVar2->field_0x2e4 = 0;
  *(uint *)&pCVar2->field_0x2e8 = 0x42000000;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x56c = 10;
  *(uint *)&pCVar2->field_0x58c = 10;
  *(uint *)&pCVar2->field_0x574 = 1;
  *(uint *)&pCVar2->field_0x594 = 0;
  *(uint *)&pCVar2->field_0x57c = 0;
  *(uint *)&pCVar2->field_0x578 = 2;
  *(uint *)&pCVar2->field_0x5bc = 0x3dcccccd;
  uVar1 = _DAT_005e24ec;
  *(uint *)&pCVar2->field_0x5c0 = 0;
  *(uint *)&pCVar2->field_0x5c4 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  *(uint *)&pCVar2->field_0x604 = 0x8000;
  pCVar2->field_0x5e4 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
            ((CDemonGlobe *)&pCVar2->field_0x5c8,8.0);
  *(uint *)&pCVar2->field_0x5e8 = 1;
  return pCVar2;
}
