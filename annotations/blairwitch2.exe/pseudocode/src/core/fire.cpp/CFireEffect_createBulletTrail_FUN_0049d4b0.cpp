// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_0049d4b0
// Address: 0049d4b0
// Address Range: [[0049d4b0, 0049d4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0049d4b0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_0049d4b0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01c91264 + 1;
  this_ptr_00 = g_BulletTrailPool + g_INT_01c91264;
  g_INT_01c91264 = iVar1;
  if (9 < iVar1) {
    g_INT_01c91264 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_004972d0
            (this_ptr_00,start_position,end_position,model_ptr,segment_length);
  return;
}
