// Name: sound_sndwav.cpp_CWavOutDevice_reset_FUN_0052c3f0
// Address: 0052c3f0
// Address Range: [[0052c3f0, 0052c459]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_0052c3f0(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_0052c3f0(CWavOutDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (_DAT_02dc93a4 != (HWAVEOUT)0x0) {
    MVar1 = waveOutReset(_DAT_02dc93a4);
    if (MVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2dc93a8) != (LPWAVEHDR)0x0) {
      waveOutUnprepareHeader(_DAT_02dc93a4,*(LPWAVEHDR *)(iVar2 + 0x2dc93a8),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x20);
  iVar2 = sound_sndmain_cpp_killSoundThread_FUN_00528780();
  if (iVar2 != 0) {
    return iVar3;
  }
  return 0;
}
