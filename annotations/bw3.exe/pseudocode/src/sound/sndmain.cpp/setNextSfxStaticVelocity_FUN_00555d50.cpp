// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_00555d50
// Address: 00555d50
// Address Range: [[00555d50, 00555d8e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00555d50(float vel_x,float vel_y,float vel_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00555d50(float vel_x,float vel_y,float vel_z)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(float *)(iVar1 + 0x2ceb944) = vel_x;
  *(float *)(iVar1 + 0x2ceb948) = vel_y;
  *(float *)(iVar1 + 0x2ceb94c) = vel_z;
  *(uint *)(iVar1 + 0x2ceb950) = 0;
  *(uint *)(iVar1 + 0x2ceb954) = 0;
  return;
}
