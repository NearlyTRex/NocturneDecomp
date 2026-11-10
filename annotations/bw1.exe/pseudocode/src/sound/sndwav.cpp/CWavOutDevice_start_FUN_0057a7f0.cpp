// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_0057a7f0
// Address: 0057a7f0
// Address Range: [[0057a7f0, 0057a8b6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0057a7f0(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0057a7f0(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02c828d4) {
    iVar2 = 0;
    do {
      memset(*(void **)(iVar2 + 0x2c82864),0,0x20);
      **(uint **)(iVar2 + 0x2c82864) = *(uint *)(iVar2 + 0x2c828a4);
      *(int *)(*(int *)(iVar2 + 0x2c82864) + 0xc) = iVar3;
      *(int *)(*(int *)(iVar2 + 0x2c82864) + 4) =
           _DAT_02c828c8 *
           ((int)((_DAT_02c828c4 + (_DAT_02c828c4 >> 0x1f) * -8) -
                 (uint)((_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c828d0;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(iVar3);
      if (iVar1 == 0) goto LAB_0057a8a0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_02c828d4);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_00575c00
                    (((float)_DAT_02c828d0 / (float)_DAT_02c828cc) * (float)_DAT_005f576f);
  if (iVar3 != 0) {
    return 1;
  }
LAB_0057a8a0:
  (**(code **)(*(int *)this_ptr + 8))(this_ptr);
  return 0;
}
