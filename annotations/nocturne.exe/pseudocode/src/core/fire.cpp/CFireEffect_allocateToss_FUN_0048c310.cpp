// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310
// Address: 0048c310
// Address Range: [[0048c310, 0048c36d]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  int iVar1;
  
  iVar1 = g_INT_01c5d820;
  core_fire_cpp_CToss_create_FUN_004873b0
            (g_TossPool + g_INT_01c5d820,toss_type,position,orientation,velocity,fuse_time);
  g_INT_01c5d820 = g_INT_01c5d820 + 1;
  if (g_INT_01c5d820 < 0x14) {
    return iVar1;
  }
  g_INT_01c5d820 = 0;
  return iVar1;
}
