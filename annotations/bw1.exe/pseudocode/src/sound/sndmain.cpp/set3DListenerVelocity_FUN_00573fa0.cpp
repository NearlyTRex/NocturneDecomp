// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_00573fa0
// Address: 00573fa0
// Address Range: [[00573fa0, 00573fd6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00573fa0(float velocity_x,float velocity_y,float velocity_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00573fa0(float velocity_x,float velocity_y,float velocity_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = g_INT_02c7fc88;
  *(float *)((int)&g_CVector3d_02c7fc28.x + g_INT_02c7fc88 * 4) = velocity_x;
  *(float *)((int)&g_CVector3d_02c7fc28.y + iVar1 * 4) = velocity_y;
  *(float *)((int)&g_CVector3d_02c7fc28.z + iVar1 * 4) = velocity_z;
  g_BYTE_02c807f4 = g_BYTE_02c807f4 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
