// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_00557dc0
// Address: 00557dc0
// Address Range: [[00557dc0, 00557e86]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_00557dc0(CWavOutDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_00557dc0(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_0264b104) {
    iVar2 = 0;
    do {
      memset(*(void **)(iVar2 + 0x264b094),0,0x20);
      **(uint **)(iVar2 + 0x264b094) = *(uint *)(iVar2 + 0x264b0d4);
      *(int *)(*(int *)(iVar2 + 0x264b094) + 0xc) = iVar3;
      *(int *)(*(int *)(iVar2 + 0x264b094) + 4) =
           _DAT_0264b0f8 *
           ((int)((_DAT_0264b0f4 + (_DAT_0264b0f4 >> 0x1f) * -8) -
                 (uint)((_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b100;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(iVar3);
      if (iVar1 == 0) goto LAB_00557e70;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_0264b104);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_005531d0
                    (((float)_DAT_0264b100 / (float)_DAT_0264b0fc) * (float)_DAT_005ea575);
  if (iVar3 != 0) {
    return 1;
  }
LAB_00557e70:
  (**(code **)(*(int *)this_ptr + 8))(this_ptr);
  return 0;
}
