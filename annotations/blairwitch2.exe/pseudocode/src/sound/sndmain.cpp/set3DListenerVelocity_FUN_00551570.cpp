// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570
// Address: 00551570
// Address Range: [[00551570, 005515a6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00551570(float velocity_x,float velocity_y,float velocity_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00551570(float velocity_x,float velocity_y,float velocity_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = _DAT_026484b8;
  *(float *)(_DAT_026484b8 * 4 + 0x2648458) = velocity_x;
  *(float *)(iVar1 * 4 + 0x2648460) = velocity_y;
  *(float *)(iVar1 * 4 + 0x2648468) = velocity_z;
  DAT_02649024 = DAT_02649024 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
