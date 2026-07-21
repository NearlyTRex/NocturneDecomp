// Name: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
// Address: 00526d10
// Address Range: [[00526d10, 00526dc8]]
// Convention: unknown
// Signature: undefined8 sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    uVar3 = 0xbff0000000000000;
  }
  else {
    if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != 0)) {
      iVar2 = FUN_005257e0(iVar1);
      if (iVar2 == 0) {
        sound_sndmain_cpp_unlockSound_FUN_00528890();
        return 0xbff0000000000000;
      }
    }
    uVar3 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                      (*(uint *)(iVar1 + 0x74),*(uint *)(iVar1 + 0x60),
                       *(uint *)(iVar1 + 100),*(uint *)(iVar1 + 0x68),param_2);
    sound_sndmain_cpp_unlockSound_FUN_00528890();
  }
  return uVar3;
}
