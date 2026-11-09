// Name: sound_sndwav.cpp_CWavInDevice_reset_FUN_0057ae10
// Address: 0057ae10
// Address Range: [[0057ae10, 0057ae68]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0057ae10(CWavInDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0057ae10(CWavInDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (_DAT_02c828d8 != (HWAVEIN)0x0) {
    MVar1 = waveInReset(_DAT_02c828d8);
    if (MVar1 != 0) {
      sound_sndmain_cpp_FUN_005773f0("waveInReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2c8292c) != (LPWAVEHDR)0x0) {
      waveInUnprepareHeader(_DAT_02c828d8,*(LPWAVEHDR *)(iVar2 + 0x2c8292c),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return iVar3;
}
