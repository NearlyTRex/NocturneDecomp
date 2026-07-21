// Name: sound_sndmain.cpp_closeSoundDevice_FUN_005285b0
// Address: 005285b0
// Address Range: [[005285b0, 0052860c]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005285b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005285b0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = 0x2dc1edc;
    do {
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(iVar1);
      iVar1 = iVar1 + 0x168;
    } while (iVar1 != 0x2dc78dc);
    if (_DAT_02dc8318 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02dc8318)(_DAT_02dc8318);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02dc8320 = 0;
        _DAT_02dc8318 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
