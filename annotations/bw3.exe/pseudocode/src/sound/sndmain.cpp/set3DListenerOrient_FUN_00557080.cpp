// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_00557080
// Address: 00557080
// Address Range: [[00557080, 005570f8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00557080(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00557080(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2870) = front_x;
  *(float *)(iVar1 * 4 + 0x2cf2878) = front_y;
  *(float *)(iVar1 * 4 + 0x2cf2880) = front_z;
  *(float *)(iVar1 * 4 + 0x2cf2888) = up_x;
  *(float *)(iVar1 * 4 + 0x2cf2890) = up_y;
  *(float *)(iVar1 * 4 + 0x2cf2898) = up_z;
  *(float *)(iVar1 * 4 + 0x2cf28a0) = right_x;
  *(float *)(iVar1 * 4 + 0x2cf28a8) = right_y;
  *(float *)(iVar1 * 4 + 0x2cf28b0) = right_z;
  DAT_02cf3427 = DAT_02cf3427 | 0x20;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
