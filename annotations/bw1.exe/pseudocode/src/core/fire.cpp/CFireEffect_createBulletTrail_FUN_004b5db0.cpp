// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004b5db0
// Address: 004b5db0
// Address Range: [[004b5db0, 004b5dff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01ca9cf0 * 0x24;
  _DAT_01ca9cf0 = _DAT_01ca9cf0 + 1;
  if (9 < _DAT_01ca9cf0) {
    _DAT_01ca9cf0 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_004afc70
            ((CBulletTrail *)(iVar1 + 0x1ca9cf4),param_2,param_3,param_4,param_5);
  return;
}
