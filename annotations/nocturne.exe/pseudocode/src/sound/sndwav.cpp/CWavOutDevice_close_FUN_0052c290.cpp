// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290
// Address: 0052c290
// Address Range: [[0052c290, 0052c330]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)(iVar1 + 0x2dc93e8) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2dc93e8));
      *(uint *)(iVar1 + 0x2dc93e8) = 0;
    }
    *(uint *)(iVar1 + 0x2dc93c8) = 0;
    if (*(HGLOBAL *)(iVar1 + 0x2dc9408) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar1 + 0x2dc9408));
      *(uint *)(iVar1 + 0x2dc9408) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)(iVar1 + 0x2dc93a8) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (_DAT_02dc93a4 == (HWAVEOUT)0x0) {
    return uVar4;
  }
  MVar2 = waveOutClose(_DAT_02dc93a4);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_00529980("waveOutClose failed.");
    uVar4 = 0;
  }
  _DAT_02dc93a4 = (HWAVEOUT)0x0;
  return uVar4;
}
