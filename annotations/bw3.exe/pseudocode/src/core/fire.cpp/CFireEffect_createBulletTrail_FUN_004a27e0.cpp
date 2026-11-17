// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004a27e0
// Address: 004a27e0
// Address Range: [[004a27e0, 004a282f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004a27e0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004a27e0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  CBulletTrail *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01cefd10 + 1;
  this_ptr_00 = g_CBulletTrail_ARRAY_01cefd14 + g_INT_01cefd10;
  g_INT_01cefd10 = iVar1;
  if (9 < iVar1) {
    g_INT_01cefd10 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_0049aca0
            (this_ptr_00,start_position,end_position,model_ptr,segment_length);
  return;
}
