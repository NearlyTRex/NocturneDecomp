// Name: core_lightgun.cpp_CLightGun_ctor_FUN_004e2a20
// Address: 004e2a20
// Address Range: [[004e2a20, 004e2adf]]
// Convention: unknown
// Signature: CLightGun * core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightGun * core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20(CLightGun *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CLightGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar3->field_0x2b4,(char *)0x5dbffc);
  *(uint *)&pCVar3->field_0x6d8 = 0;
  *(uint *)&pCVar3->field_0x6d4 = 0;
  *(uint *)&pCVar3->field_0x434 = 0;
  *(uint *)&pCVar3->field_0x438 = 0;
  *(uint *)&pCVar3->field_0x43c = 0xb;
  *(uint *)&pCVar3->field_0x440 = 0;
  *(uint *)&pCVar3->field_0x444 = 0x42000000;
  *(uint *)&pCVar3->field_0x448 = 1;
  *(uint *)&pCVar3->field_0x6e8 = 1;
  uVar1 = _DAT_005f95cc;
  *(uint *)&pCVar3->field_0x44c = 0;
  uVar2 = _DAT_005f95d0;
  *(uint *)&pCVar3->field_0x6e4 = 0;
  *(uint *)&pCVar3->field_0x6e0 = 0x3f800000;
  *(uint *)&pCVar3->field_0x6c0 = uVar1;
  *(uint *)&pCVar3->field_0x6dc = uVar2;
  return pCVar3;
}
