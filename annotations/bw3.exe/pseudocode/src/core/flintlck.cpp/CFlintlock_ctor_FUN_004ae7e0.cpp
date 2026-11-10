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
  (pCVar1->base).vtable._ub = &g_CFlintlockVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"flintlock.kfm");
  pCVar1->is_spread_weapon = 0;
  pCVar1->fire_mode = FIRE_MODE_SINGLE;
  pCVar1->can_penetrate = 1;
  pCVar1->bolt_velocity = 50.0;
  *(uint *)&pCVar1->field_0x574 = 0;
  *(uint *)&pCVar1->field_0x56c = 0xb;
  return (CFlintlock *)pCVar1;
}
