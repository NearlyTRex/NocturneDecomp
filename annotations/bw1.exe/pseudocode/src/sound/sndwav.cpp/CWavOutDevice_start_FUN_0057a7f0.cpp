// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_0057a7f0
// Address: 0057a7f0
// Address Range: [[0057a7f0, 0057a8b6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0057a7f0(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0057a7f0(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_EDI;
  
  iVar3 = 0;
  if (0 < g_INT_02c828d4) {
    iVar2 = 0;
    do {
      memset(*(void **)((int)g_LPWAVEHDR_ARRAY_02c82864 + iVar2),0,0x20);
      **(uint **)((int)g_LPWAVEHDR_ARRAY_02c82864 + iVar2) =
           *(uint *)((int)g_LPVOID_ARRAY_02c828a4 + iVar2);
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02c82864 + iVar2) + 0xc) = iVar3;
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02c82864 + iVar2) + 4) =
           g_INT_02c828c8 *
           ((int)((g_INT_02c828c4 + (g_INT_02c828c4 >> 0x1f) * -8) -
                 (uint)((g_INT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02c828d0;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(iVar3);
      if (iVar1 == 0) goto LAB_0057a8a0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_INT_02c828d4);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_00575c00
                    (__BITCAST_DOUBLE(CONCAT44(unaff_EDI,
                                      ((float)g_INT_02c828d0 / (float)g_INT_02c828cc) *
                                      (float)0.33333333333333298)));
  if (iVar3 != 0) {
    return 1;
  }
LAB_0057a8a0:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
