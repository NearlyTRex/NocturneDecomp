// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_004b6ed0
// Address: 004b6ed0
// Address Range: [[004b6ed0, 004b6f2d]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004b6ed0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004b6ed0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  int iVar1;
  
  iVar1 = g_INT_01cb0188;
  core_fire_cpp_CToss_create_FUN_004b1c50
            (g_TossPool + g_INT_01cb0188,toss_type,position,orientation,velocity,fuse_time);
  g_INT_01cb0188 = g_INT_01cb0188 + 1;
  if (g_INT_01cb0188 < 0x14) {
    return iVar1;
  }
  g_INT_01cb0188 = 0;
  return iVar1;
}
