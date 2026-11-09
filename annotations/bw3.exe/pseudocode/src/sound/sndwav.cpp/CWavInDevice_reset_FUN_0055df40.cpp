// Name: sound_sndwav.cpp_CWavInDevice_reset_FUN_0055df40
// Address: 0055df40
// Address Range: [[0055df40, 0055df98]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0055df40(CWavInDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0055df40(CWavInDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (_DAT_02cf5504 != (HWAVEIN)0x0) {
    MVar1 = waveInReset(_DAT_02cf5504);
    if (MVar1 != 0) {
      sound_sndmain_cpp_FUN_0055a560("waveInReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2cf5558) != (LPWAVEHDR)0x0) {
      waveInUnprepareHeader(_DAT_02cf5504,*(LPWAVEHDR *)(iVar2 + 0x2cf5558),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return iVar3;
}
