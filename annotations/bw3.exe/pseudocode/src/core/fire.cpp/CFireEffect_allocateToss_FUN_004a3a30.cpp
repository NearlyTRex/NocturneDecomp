// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30
// Address: 004a3a30
// Address Range: [[004a3a30, 004a3a9f]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004a3a30(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004a3a30(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  int iVar1;
  
  iVar1 = g_INT_01cf61d0;
  core_fire_cpp_CToss_create_FUN_0049cee0
            (g_TossPool + g_INT_01cf61d0,toss_type,position,orientation,velocity,fuse_time);
  g_INT_01cf61d0 = g_INT_01cf61d0 + 1;
  if (g_INT_01cf61d0 < 0x14) {
    return iVar1;
  }
  g_INT_01cf61d0 = 0;
  return iVar1;
}
