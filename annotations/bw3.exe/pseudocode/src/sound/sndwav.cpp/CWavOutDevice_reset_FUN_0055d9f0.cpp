// Name: sound_sndwav.cpp_CWavOutDevice_reset_FUN_0055d9f0
// Address: 0055d9f0
// Address Range: [[0055d9f0, 0055da59]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_0055d9f0(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_0055d9f0(CWavOutDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (_DAT_02cf546c != (HWAVEOUT)0x0) {
    MVar1 = waveOutReset(_DAT_02cf546c);
    if (MVar1 != 0) {
      sound_sndmain_cpp_FUN_0055a560("?waveOutReset failed!" + 1);
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2cf5490) != (LPWAVEHDR)0x0) {
      waveOutUnprepareHeader(_DAT_02cf546c,*(LPWAVEHDR *)(iVar2 + 0x2cf5490),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x20);
  iVar2 = sound_sndmain_cpp_killSoundThread_FUN_00558e10();
  if (iVar2 != 0) {
    return iVar3;
  }
  return 0;
}
