// Name: core_lightgun.cpp_CLightGun_ctor_FUN_004ffeb0
// Address: 004ffeb0
// Address Range: [[004ffeb0, 004fff6f]]
// Convention: unknown
// Signature: CLightGun * core_lightgun_cpp_CLightGun_ctor_FUN_004ffeb0(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightGun * core_lightgun_cpp_CLightGun_ctor_FUN_004ffeb0(CLightGun *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar3->field_0x154 = &g_CLightGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar3->field_0x158,"ecre.kfm");
  *(uint *)&pCVar3->field_0x57c = 0;
  *(uint *)&pCVar3->field_0x578 = 0;
  *(uint *)&pCVar3->field_0x2d8 = 0;
  *(uint *)&pCVar3->field_0x2dc = 0;
  *(uint *)&pCVar3->field_0x2e0 = 10;
  *(uint *)&pCVar3->field_0x2e4 = 0;
  *(uint *)&pCVar3->field_0x2e8 = 0x42000000;
  *(uint *)&pCVar3->field_0x2ec = 0;
  *(uint *)&pCVar3->field_0x58c = 1;
  uVar1 = _DAT_0060300c;
  *(uint *)&pCVar3->field_0x2f0 = 1;
  uVar2 = _DAT_00603010;
  *(uint *)&pCVar3->field_0x588 = 0;
  *(uint *)&pCVar3->field_0x584 = 0x3f800000;
  *(uint *)&pCVar3->field_0x564 = uVar1;
  *(uint *)&pCVar3->field_0x580 = uVar2;
  return pCVar3;
}
