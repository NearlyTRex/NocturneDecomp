// Name: core_sound.cpp_syncChannel3WithChannel0_FUN_0057cb9e
// Address: 0057cb9e
// Address Range: [[0057cb9e, 0057cbf7]]
// Convention: unknown
// Signature: void core_sound_cpp_syncChannel3WithChannel0_FUN_0057cb9e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_syncChannel3WithChannel0_FUN_0057cb9e(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
  if (iVar1 != 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,1);
    fVar2 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(3,fVar2 * _DAT_02c832a8);
    return;
  }
  sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,0);
  return;
}
