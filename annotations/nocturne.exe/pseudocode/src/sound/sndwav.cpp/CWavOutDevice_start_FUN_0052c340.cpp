// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_0052c340
// Address: 0052c340
// Address Range: [[0052c340, 0052c3ed]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0052c340(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0052c340(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02dc943c) {
    iVar2 = 0;
    do {
      memset(*(void **)(iVar2 + 0x2dc93a8),0,0x20);
      **(uint **)(iVar2 + 0x2dc93a8) = *(uint *)(iVar2 + 0x2dc93c8);
      *(int *)(*(int *)(iVar2 + 0x2dc93a8) + 0xc) = iVar3;
      *(uint *)(*(int *)(iVar2 + 0x2dc93a8) + 4) = _DAT_02dc9438;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(iVar3);
      if (iVar1 == 0) goto LAB_0052c3d6;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_02dc943c);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_005286d0
                    (((double)_DAT_02dc9434 / (double)_DAT_02dc942c) * 0.33333333333333298);
  if (iVar3 != 0) {
    return 1;
  }
LAB_0052c3d6:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
