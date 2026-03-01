// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004c7d60
// Address: 004c7d60
// Address Range: [[004c7d60, 004c7daf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004c7d60(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004c7d60(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = g_BulletTrailAllocIndex + 1;
  this_ptr_00 = g_BulletTrailPool + g_BulletTrailAllocIndex;
  g_BulletTrailAllocIndex = iVar1;
  if (9 < iVar1) {
    g_BulletTrailAllocIndex = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_004c2170
            (this_ptr_00,start_position,end_position,model_ptr,segment_length);
  return;
}
