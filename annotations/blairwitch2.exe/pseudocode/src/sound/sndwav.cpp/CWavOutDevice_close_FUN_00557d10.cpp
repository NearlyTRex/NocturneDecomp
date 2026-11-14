// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_00557d10
// Address: 00557d10
// Address Range: [[00557d10, 00557db0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_00557d10(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_00557d10(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)(iVar1 + 0x264b0b4) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x264b0b4));
      *(uint *)(iVar1 + 0x264b0b4) = 0;
    }
    *(uint *)(iVar1 + 0x264b0d4) = 0;
    if (*(HGLOBAL *)(iVar1 + 0x264b074) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x264b074));
      *(uint *)(iVar1 + 0x264b074) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)(iVar1 + 0x264b094) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (_DAT_0264b070 == (HWAVEOUT)0x0) {
    return uVar4;
  }
  MVar2 = waveOutClose(_DAT_0264b070);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutClose failed.");
    uVar4 = 0;
  }
  _DAT_0264b070 = (HWAVEOUT)0x0;
  return uVar4;
}
