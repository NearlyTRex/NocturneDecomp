// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_0055d870
// Address: 0055d870
// Address Range: [[0055d870, 0055d910]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*(int *)this_ptr + 8))(this_ptr);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)(iVar1 + 0x2cf54b0) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2cf54b0));
      *(uint *)(iVar1 + 0x2cf54b0) = 0;
    }
    *(uint *)(iVar1 + 0x2cf54d0) = 0;
    if (*(HGLOBAL *)(iVar1 + 0x2cf5470) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2cf5470));
      *(uint *)(iVar1 + 0x2cf5470) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)(iVar1 + 0x2cf5490) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (_DAT_02cf546c == (HWAVEOUT)0x0) {
    return uVar4;
  }
  MVar2 = waveOutClose(_DAT_02cf546c);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_0055a560("waveOutClose failed.");
    uVar4 = 0;
  }
  _DAT_02cf546c = (HWAVEOUT)0x0;
  return uVar4;
}
