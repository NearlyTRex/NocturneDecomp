// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_0049e5d0
// Address: 0049e5d0
// Address Range: [[0049e5d0, 0049e62d]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0049e5d0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0049e5d0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  int iVar1;
  
  iVar1 = _DAT_01c976fc;
  core_fire_cpp_CToss_create_FUN_004992b0
            (g_TossPool + _DAT_01c976fc,toss_type,position,orientation,velocity,fuse_time);
  _DAT_01c976fc = _DAT_01c976fc + 1;
  if (_DAT_01c976fc < 0x14) {
    return iVar1;
  }
  _DAT_01c976fc = 0;
  return iVar1;
}
