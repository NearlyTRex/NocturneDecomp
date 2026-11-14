// Name: sound_sndwav.cpp_CWavInDevice_close_FUN_00558240
// Address: 00558240
// Address Range: [[00558240, 005582e0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_00558240(CWavInDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_00558240(CWavInDevice *this_ptr)

{
  HGLOBAL hMem;
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)(iVar1 + 0x264b1ac) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x264b1ac));
      *(uint *)(iVar1 + 0x264b1ac) = 0;
    }
    hMem = *(HGLOBAL *)(iVar1 + 0x264b10c);
    *(uint *)(&DAT_0264b1fc + iVar1) = 0;
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
      *(uint *)(iVar1 + 0x264b10c) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)(iVar1 + 0x264b15c) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x50);
  if (_DAT_0264b108 == (HWAVEIN)0x0) {
    return uVar4;
  }
  MVar2 = waveInClose(_DAT_0264b108);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveInClose failed.");
    uVar4 = 0;
  }
  _DAT_0264b108 = (HWAVEIN)0x0;
  return uVar4;
}
