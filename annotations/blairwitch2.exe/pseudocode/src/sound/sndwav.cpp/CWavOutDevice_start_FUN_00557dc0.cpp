// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_00557dc0
// Address: 00557dc0
// Address Range: [[00557dc0, 00557e86]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_00557dc0(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_00557dc0(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_EDI;
  
  iVar3 = 0;
  if (0 < g_INT_0264b104) {
    iVar2 = 0;
    do {
      memset(*(void **)((int)g_LPWAVEHDR_ARRAY_0264b094 + iVar2),0,0x20);
      **(uint **)((int)g_LPWAVEHDR_ARRAY_0264b094 + iVar2) =
           *(uint *)((int)g_LPVOID_ARRAY_0264b0d4 + iVar2);
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_0264b094 + iVar2) + 0xc) = iVar3;
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_0264b094 + iVar2) + 4) =
           g_INT_0264b0f8 *
           ((int)((g_INT_0264b0f4 + (g_INT_0264b0f4 >> 0x1f) * -8) -
                 (uint)((g_INT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * g_INT_0264b100;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(iVar3);
      if (iVar1 == 0) goto LAB_00557e70;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_INT_0264b104);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_005531d0
                    (__BITCAST_DOUBLE(CONCAT44(unaff_EDI,
                                      ((float)g_INT_0264b100 / (float)g_INT_0264b0fc) *
                                      (float)0.33333333333333298)));
  if (iVar3 != 0) {
    return 1;
  }
LAB_00557e70:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
