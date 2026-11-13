// Name: core_sound.cpp_syncChannel3WithChannel0_FUN_0055fcd0
// Address: 0055fcd0
// Address Range: [[0055fcd0, 0055fd27]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_0055fcd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_0055fcd0(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
  if (iVar1 != 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(3,fVar2 * _DAT_02cf5ec8);
    return;
  }
  sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,0);
  return;
}
