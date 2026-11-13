// Name: sound_sndmain.cpp_set3DListenerVelocity_FUN_00573fa0
// Address: 00573fa0
// Address Range: [[00573fa0, 00573fd6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00573fa0(float velocity_x,float velocity_y,float velocity_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00573fa0(float velocity_x,float velocity_y,float velocity_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = _DAT_02c7fc88;
  *(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc28) = velocity_x;
  *(float *)(iVar1 * 4 + 0x2c7fc30) = velocity_y;
  *(float *)(iVar1 * 4 + 0x2c7fc38) = velocity_z;
  DAT_02c807f4 = DAT_02c807f4 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
