// Name: core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0
// Address: 0048c2a0
// Address Range: [[0048c2a0, 0048c30e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

{
  int iVar1;
  
  if (fuse_time < (float)0.0001) {
    fuse_time = 0.0001;
  }
  iVar1 = core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310
                    (this_ptr,0,position,orientation,velocity,fuse_time);
  iVar1 = iVar1 * 0x3e4;
  *(uint *)(iVar1 + 0x1c5dc04) = sfx_handle;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0
            (*(uint *)(iVar1 + 0x1c5dc04),(CVector3f *)(iVar1 + 0x1c5d9a4));
  return;
}
