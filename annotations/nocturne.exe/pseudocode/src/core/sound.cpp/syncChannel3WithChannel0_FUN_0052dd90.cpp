// Name: core_sound.cpp_syncChannel3WithChannel0_FUN_0052dd90
// Address: 0052dd90
// Address Range: [[0052dd90, 0052dde7]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_0052dd90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_0052dd90(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
  if (iVar1 != 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(3,fVar2 * _DAT_02dc9c98);
    return;
  }
  sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,0);
  return;
}
