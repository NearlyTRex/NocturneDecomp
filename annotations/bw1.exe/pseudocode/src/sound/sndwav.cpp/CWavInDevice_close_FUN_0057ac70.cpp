// Name: sound_sndwav.cpp_CWavInDevice_close_FUN_0057ac70
// Address: 0057ac70
// Address Range: [[0057ac70, 0057ad10]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_0057ac70(CWavInDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_0057ac70(CWavInDevice *this_ptr)

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
    if (*(HGLOBAL *)(iVar1 + 0x2c8297c) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2c8297c));
      *(uint *)(iVar1 + 0x2c8297c) = 0;
    }
    hMem = *(HGLOBAL *)(iVar1 + 0x2c828dc);
    *(uint *)(&DAT_02c829cc + iVar1) = 0;
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
      *(uint *)(iVar1 + 0x2c828dc) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)(iVar1 + 0x2c8292c) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x50);
  if (_DAT_02c828d8 == (HWAVEIN)0x0) {
    return uVar4;
  }
  MVar2 = waveInClose(_DAT_02c828d8);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_005773f0("waveInClose failed.");
    uVar4 = 0;
  }
  _DAT_02c828d8 = (HWAVEIN)0x0;
  return uVar4;
}
