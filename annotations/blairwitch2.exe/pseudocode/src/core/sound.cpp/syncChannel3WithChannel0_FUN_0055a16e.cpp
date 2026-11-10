// Name: core_sound.cpp_syncChannel3WithChannel0_FUN_0055a16e
// Address: 0055a16e
// Address Range: [[0055a16e, 0055a1c7]]
// Convention: unknown
// Signature: void core_sound_cpp_syncChannel3WithChannel0_FUN_0055a16e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_syncChannel3WithChannel0_FUN_0055a16e(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
  if (iVar1 != 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,1);
    fVar2 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(3,fVar2 * _DAT_0264bad8);
    return;
  }
  sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,0);
  return;
}
