// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_0048b220
// Address: 0048b220
// Address Range: [[0048b220, 0048b26f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0048b220(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0048b220(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = g_BulletTrailAllocIndex + 1;
  this_ptr_00 = g_BulletTrailPool + g_BulletTrailAllocIndex;
  g_BulletTrailAllocIndex = iVar1;
  if (9 < iVar1) {
    g_BulletTrailAllocIndex = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_00485640
            (this_ptr_00,start_position,end_position,model_ptr,segment_length);
  return;
}
