// Name: core_fire.cpp_CFireEffect_createToss_FUN_004c8dd0
// Address: 004c8dd0
// Address Range: [[004c8dd0, 004c8e3e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_004c8dd0(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_004c8dd0(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

{
  int iVar1;
  
  if (fuse_time < (float)0.0001) {
    fuse_time = 0.0001;
  }
  iVar1 = core_fire_cpp_CFireEffect_allocateToss_FUN_004c8e40
                    (this_ptr,0,position,orientation,velocity,fuse_time);
  g_TossPool[iVar1].sfx_handle = sfx_handle;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0
            (g_TossPool[iVar1].sfx_handle,&g_TossPool[iVar1].physics_box.position);
  return;
}
