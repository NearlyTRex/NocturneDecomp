// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004b5db0
// Address: 004b5db0
// Address Range: [[004b5db0, 004b5dff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004b5db0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01ca9cf0 + 1;
  this_ptr_00 = g_BulletTrailPool + g_INT_01ca9cf0;
  g_INT_01ca9cf0 = iVar1;
  if (9 < iVar1) {
    g_INT_01ca9cf0 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_004afc70
            (this_ptr_00,start_position,end_position,model_ptr,segment_length);
  return;
}
