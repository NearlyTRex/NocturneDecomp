// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_0048b220
// Address: 0048b220
// Address Range: [[0048b220, 0048b26f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0048b220(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0048b220(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = _DAT_01c58c8c + 1;
  this_ptr_00 = g_CBulletTrail_ARRAY_01c58c90 + _DAT_01c58c8c;
  _DAT_01c58c8c = iVar1;
  if (9 < iVar1) {
    _DAT_01c58c8c = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_00485640(this_ptr_00,param_2,param_3,param_4,param_5);
  return;
}
