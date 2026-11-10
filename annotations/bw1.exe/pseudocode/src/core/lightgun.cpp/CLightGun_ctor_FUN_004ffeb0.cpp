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
  float fVar1;
  uint uVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CLightGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar3->field_0x158,"ecre.kfm");
  *(uint *)&pCVar3->field_0x57c = 0;
  *(uint *)&pCVar3->field_0x578 = 0;
  *(int *)&pCVar3->field_0x2d8 = 0;
  *(EFireMode *)&pCVar3->field_0x2dc = FIRE_MODE_AUTOMATIC;
  *(EWeaponType *)&pCVar3->field_0x2e0 = WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN;
  *(int *)&pCVar3->field_0x2e4 = 0;
  *(float *)&pCVar3->field_0x2e8 = 32.0;
  *(int *)&pCVar3->field_0x2ec = 0;
  *(uint *)&pCVar3->field_0x58c = 1;
  fVar1 = _DAT_0060300c;
  *(int *)&pCVar3->field_0x2f0 = 1;
  uVar2 = _DAT_00603010;
  *(uint *)&pCVar3->field_0x588 = 0;
  *(uint *)&pCVar3->field_0x584 = 0x3f800000;
  *(float *)&pCVar3->field_0x564 = fVar1;
  *(uint *)&pCVar3->field_0x580 = uVar2;
  return pCVar3;
}
