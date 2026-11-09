// Name: core_flintlck.cpp_CFlintlock_ctor_FUN_004ae7e0
// Address: 004ae7e0
// Address Range: [[004ae7e0, 004ae849]]
// Convention: unknown
// Signature: CFlintlock * core_flintlck_cpp_CFlintlock_ctor_FUN_004ae7e0(CFlintlock *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFlintlock * core_flintlck_cpp_CFlintlock_ctor_FUN_004ae7e0(CFlintlock *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CFlintlockVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"flintlock.kfm");
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 1;
  *(uint *)&pCVar1->field_0x2e4 = 1;
  *(uint *)&pCVar1->field_0x2e8 = 0x42480000;
  *(uint *)&pCVar1->field_0x574 = 0;
  *(uint *)&pCVar1->field_0x56c = 0xb;
  return (CFlintlock *)pCVar1;
}
