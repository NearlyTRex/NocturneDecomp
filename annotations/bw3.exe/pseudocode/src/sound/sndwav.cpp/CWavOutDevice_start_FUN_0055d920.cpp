// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_0055d920
// Address: 0055d920
// Address Range: [[0055d920, 0055d9e6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0055d920(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0055d920(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_EDI;
  
  iVar3 = 0;
  if (0 < g_INT_02cf5500) {
    iVar2 = 0;
    do {
      memset(*(void **)(iVar2 + 0x2cf5490),0,0x20);
      **(uint **)(iVar2 + 0x2cf5490) = *(uint *)(iVar2 + 0x2cf54d0);
      *(int *)(*(int *)(iVar2 + 0x2cf5490) + 0xc) = iVar3;
      *(int *)(*(int *)(iVar2 + 0x2cf5490) + 4) =
           g_INT_02cf54f4 *
           ((int)((g_INT_02cf54f0 + (g_INT_02cf54f0 >> 0x1f) * -8) -
                 (uint)((g_INT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02cf54fc;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(iVar3);
      if (iVar1 == 0) goto LAB_0055d9d0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_INT_02cf5500);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_00558d70
                    (__BITCAST_DOUBLE(CONCAT44(unaff_EDI,
                                      ((float)g_INT_02cf54fc / (float)g_INT_02cf54f8) *
                                      (float)0.33333333333333298)));
  if (iVar3 != 0) {
    return 1;
  }
LAB_0055d9d0:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
