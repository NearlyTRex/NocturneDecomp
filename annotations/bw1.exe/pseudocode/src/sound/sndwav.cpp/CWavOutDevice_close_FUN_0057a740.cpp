// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_0057a740
// Address: 0057a740
// Address Range: [[0057a740, 0057a7e0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0057a740(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0057a740(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)(iVar1 + 0x2c82884) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2c82884));
      *(uint *)(iVar1 + 0x2c82884) = 0;
    }
    *(uint *)(iVar1 + 0x2c828a4) = 0;
    if (*(HGLOBAL *)(iVar1 + 0x2c82844) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2c82844));
      *(uint *)(iVar1 + 0x2c82844) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)(iVar1 + 0x2c82864) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (_DAT_02c82840 == (HWAVEOUT)0x0) {
    return uVar4;
  }
  MVar2 = waveOutClose(_DAT_02c82840);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutClose failed.");
    uVar4 = 0;
  }
  _DAT_02c82840 = (HWAVEOUT)0x0;
  return uVar4;
}
