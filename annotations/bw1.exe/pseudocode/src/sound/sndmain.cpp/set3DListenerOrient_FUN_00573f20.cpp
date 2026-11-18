// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_00573f20
// Address: 00573f20
// Address Range: [[00573f20, 00573f98]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00573f20(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00573f20(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = g_INT_02c7fc88;
  *(float *)((int)&g_CVector3d_02c7fc40.x + g_INT_02c7fc88 * 4) = front_x;
  *(float *)((int)&g_CVector3d_02c7fc40.y + iVar1 * 4) = front_y;
  *(float *)((int)&g_CVector3d_02c7fc40.z + iVar1 * 4) = front_z;
  *(float *)(iVar1 * 4 + 0x2c7fc58) = up_x;
  *(float *)(iVar1 * 4 + 0x2c7fc60) = up_y;
  *(float *)(iVar1 * 4 + 0x2c7fc68) = up_z;
  *(float *)(iVar1 * 4 + 0x2c7fc70) = right_x;
  *(float *)(iVar1 * 4 + 0x2c7fc78) = right_y;
  *(float *)(iVar1 * 4 + 0x2c7fc80) = right_z;
  g_BYTE_02c807f7 = g_BYTE_02c807f7 | 0x20;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
