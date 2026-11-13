// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_00572840
// Address: 00572840
// Address Range: [[00572840, 0057287e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00572840(float vel_x,float vel_y,float vel_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00572840(float vel_x,float vel_y,float vel_z)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(float *)(iVar1 + 0x2c78d14) = vel_x;
  *(float *)(iVar1 + 0x2c78d18) = vel_y;
  *(float *)(iVar1 + 0x2c78d1c) = vel_z;
  *(uint *)(iVar1 + 0x2c78d20) = 0;
  *(uint *)(iVar1 + 0x2c78d24) = 0;
  return;
}
