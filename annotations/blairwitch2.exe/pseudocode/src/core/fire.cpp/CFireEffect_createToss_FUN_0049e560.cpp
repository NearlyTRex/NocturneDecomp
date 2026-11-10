// Name: core_fire.cpp_CFireEffect_createToss_FUN_0049e560
// Address: 0049e560
// Address Range: [[0049e560, 0049e5ce]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_0049e560(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_0049e560(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)

{
  int iVar1;
  
  if (fuse_time < (float)_DAT_005d5822) {
    fuse_time = 0.0001;
  }
  iVar1 = core_fire_cpp_CFireEffect_allocateToss_FUN_0049e5d0
                    (this_ptr,0,position,orientation,velocity,fuse_time);
  g_TossPool[iVar1].sfx_handle = sfx_handle;
  sound_sndmain_cpp_FUN_00550da0(g_TossPool[iVar1].sfx_handle,iVar1 * 0x3e4 + 0x1c97880);
  return;
}
