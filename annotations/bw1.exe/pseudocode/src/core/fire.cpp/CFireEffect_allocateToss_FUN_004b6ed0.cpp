// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_004b6ed0
// Address: 004b6ed0
// Address Range: [[004b6ed0, 004b6f2d]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004b6ed0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004b6ed0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  int iVar1;
  
  iVar1 = _DAT_01cb0188;
  core_fire_cpp_FUN_004b1c50
            (g_TossPool + _DAT_01cb0188,toss_type,position,orientation,velocity,fuse_time);
  _DAT_01cb0188 = _DAT_01cb0188 + 1;
  if (_DAT_01cb0188 < 0x14) {
    return iVar1;
  }
  _DAT_01cb0188 = 0;
  return iVar1;
}
