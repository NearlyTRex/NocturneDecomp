// Name: core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70
// Address: 005b2d70
// Address Range: [[005b2d70, 005b2dc7]]
// Convention: __cdecl
// Signature: void core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_005b2d70(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar1 != 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar2 * g_CurrentVolumeMultiplier);
    return;
  }
  sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  return;
}
