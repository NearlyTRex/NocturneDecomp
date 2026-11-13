// Name: core_fire.cpp_CFireEffect_createToss_FUN_004a3920
// Address: 004a3920
// Address Range: [[004a3920, 004a399e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_004a3920(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_004a3920(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

{
  int iVar1;
  
  if (fuse_time < (float)_DAT_005c0a40) {
    fuse_time = 0.0001;
  }
  iVar1 = core_fire_cpp_CFireEffect_allocateToss_FUN_004a3a30
                    (this_ptr,0,position,orientation,velocity,fuse_time);
  g_TossPool[iVar1].sfx_handle = sfx_handle;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00556930
            (g_TossPool[iVar1].sfx_handle,&g_TossPool[iVar1].physics_box.position);
  return;
}
