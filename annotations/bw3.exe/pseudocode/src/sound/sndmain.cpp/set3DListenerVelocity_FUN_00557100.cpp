// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_00557100
// Address: 00557100
// Address Range: [[00557100, 00557136]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00557100(float velocity_x,float velocity_y,float velocity_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00557100(float velocity_x,float velocity_y,float velocity_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2858) = velocity_x;
  *(float *)(iVar1 * 4 + 0x2cf2860) = velocity_y;
  *(float *)(iVar1 * 4 + 0x2cf2868) = velocity_z;
  DAT_02cf3424 = DAT_02cf3424 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
