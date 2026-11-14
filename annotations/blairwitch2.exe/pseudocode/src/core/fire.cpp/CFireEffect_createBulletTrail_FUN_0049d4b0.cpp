// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_0049d4b0
// Address: 0049d4b0
// Address Range: [[0049d4b0, 0049d4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0049d4b0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0049d4b0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01c91264 * 0x24;
  _DAT_01c91264 = _DAT_01c91264 + 1;
  if (9 < _DAT_01c91264) {
    _DAT_01c91264 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_004972d0
            ((CBulletTrail *)(iVar1 + 0x1c91268),param_2,param_3,param_4,param_5);
  return;
}
