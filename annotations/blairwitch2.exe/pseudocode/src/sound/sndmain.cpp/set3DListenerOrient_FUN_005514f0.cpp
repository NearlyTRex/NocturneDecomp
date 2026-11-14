// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_005514f0
// Address: 005514f0
// Address Range: [[005514f0, 00551568]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_005514f0(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_005514f0(float front_x,float front_y,float front_z,float up_x,float up_y,float up_z,float right_x,float right_y,float right_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = _DAT_026484b8;
  *(float *)(_DAT_026484b8 * 4 + 0x2648470) = front_x;
  *(float *)(iVar1 * 4 + 0x2648478) = front_y;
  *(float *)(iVar1 * 4 + 0x2648480) = front_z;
  *(float *)(iVar1 * 4 + 0x2648488) = up_x;
  *(float *)(iVar1 * 4 + 0x2648490) = up_y;
  *(float *)(iVar1 * 4 + 0x2648498) = up_z;
  *(float *)(iVar1 * 4 + 0x26484a0) = right_x;
  *(float *)(iVar1 * 4 + 0x26484a8) = right_y;
  *(float *)(iVar1 * 4 + 0x26484b0) = right_z;
  DAT_02649027 = DAT_02649027 | 0x20;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
