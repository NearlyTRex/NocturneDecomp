// Name: core_fire.cpp_CFireEffect_createToss_FUN_004b6e60
// Address: 004b6e60
// Address Range: [[004b6e60, 004b6ece]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_004b6e60(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_004b6e60(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

{
  int iVar1;
  
  if (fuse_time < (float)_DAT_005df664) {
    fuse_time = 0.0001;
  }
  iVar1 = core_fire_cpp_CFireEffect_allocateToss_FUN_004b6ed0
                    (this_ptr,0,position,orientation,velocity,fuse_time);
  g_TossPool[iVar1].sfx_handle = sfx_handle;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005737d0
            (g_TossPool[iVar1].sfx_handle,&g_TossPool[iVar1].physics_box.position);
  return;
}
