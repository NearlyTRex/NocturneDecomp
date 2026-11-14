// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_00573f20
// Address: 00573f20
// Address Range: [[00573f20, 00573f98]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00573f20(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00573f20(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = _DAT_02c7fc88;
  *(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc40) = front_x;
  *(float *)(iVar1 * 4 + 0x2c7fc48) = front_y;
  *(float *)(iVar1 * 4 + 0x2c7fc50) = front_z;
  *(float *)(iVar1 * 4 + 0x2c7fc58) = up_x;
  *(float *)(iVar1 * 4 + 0x2c7fc60) = up_y;
  *(float *)(iVar1 * 4 + 0x2c7fc68) = up_z;
  *(float *)(iVar1 * 4 + 0x2c7fc70) = right_x;
  *(float *)(iVar1 * 4 + 0x2c7fc78) = right_y;
  *(float *)(iVar1 * 4 + 0x2c7fc80) = right_z;
  DAT_02c807f7 = DAT_02c807f7 | 0x20;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
