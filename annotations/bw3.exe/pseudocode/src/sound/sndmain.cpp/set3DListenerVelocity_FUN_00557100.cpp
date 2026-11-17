// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_00557100
// Address: 00557100
// Address Range: [[00557100, 00557136]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00557100(float velocity_x,float velocity_y,float velocity_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00557100(float velocity_x,float velocity_y,float velocity_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = g_INT_02cf28b8;
  *(float *)((int)&g_CVector3d_02cf2858.x + g_INT_02cf28b8 * 4) = velocity_x;
  *(float *)((int)&g_CVector3d_02cf2858.y + iVar1 * 4) = velocity_y;
  *(float *)((int)&g_CVector3d_02cf2858.z + iVar1 * 4) = velocity_z;
  g_BYTE_02cf3424 = g_BYTE_02cf3424 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
