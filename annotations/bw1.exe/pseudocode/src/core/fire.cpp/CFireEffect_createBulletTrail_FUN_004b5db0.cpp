// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004b5db0
// Address: 004b5db0
// Address Range: [[004b5db0, 004b5dff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01ca9cf0 + 1;
  this_ptr_00 = g_CBulletTrail_ARRAY_01ca9cf4 + g_INT_01ca9cf0;
  g_INT_01ca9cf0 = iVar1;
  if (9 < iVar1) {
    g_INT_01ca9cf0 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_004afc70(this_ptr_00,param_2,param_3,param_4,param_5);
  return;
}
