// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_004c8e40
// Address: 004c8e40
// Address Range: [[004c8e40, 004c8e9d]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004c8e40(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004c8e40(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  int iVar1;
  
  iVar1 = g_TossAllocIndex;
  core_fire_cpp_CToss_create_FUN_004c3ee0
            (g_TossPool + g_TossAllocIndex,toss_type,position,orientation,velocity,fuse_time);
  g_TossAllocIndex = g_TossAllocIndex + 1;
  if (g_TossAllocIndex < 0x14) {
    return iVar1;
  }
  g_TossAllocIndex = 0;
  return iVar1;
}
