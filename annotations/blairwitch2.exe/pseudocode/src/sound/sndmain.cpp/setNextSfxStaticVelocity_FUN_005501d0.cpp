// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005501d0
// Address: 005501d0
// Address Range: [[005501d0, 0055020e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_005501d0(float vel_x,float vel_y,float vel_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_005501d0(float vel_x,float vel_y,float vel_z)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(float *)(iVar1 + 0x2641644) = vel_x;
  *(float *)(iVar1 + 0x2641648) = vel_y;
  *(float *)(iVar1 + 0x264164c) = vel_z;
  *(uint *)(iVar1 + 0x2641650) = 0;
  *(uint *)(iVar1 + 0x2641654) = 0;
  return;
}
