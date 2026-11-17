// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570
// Address: 00551570
// Address Range: [[00551570, 005515a6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00551570(float velocity_x,float velocity_y,float velocity_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00551570(float velocity_x,float velocity_y,float velocity_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = g_INT_026484b8;
  *(float *)((int)&g_CVector3d_02648458.x + g_INT_026484b8 * 4) = velocity_x;
  *(float *)((int)&g_CVector3d_02648458.y + iVar1 * 4) = velocity_y;
  *(float *)((int)&g_CVector3d_02648458.z + iVar1 * 4) = velocity_z;
  g_BYTE_02649024 = g_BYTE_02649024 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
