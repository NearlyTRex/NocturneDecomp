// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_0052c340
// Address: 0052c340
// Address Range: [[0052c340, 0052c3ed]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0052c340(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_0052c340(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_02dc943c) {
    iVar2 = 0;
    do {
      memset(*(void **)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + iVar2),0,0x20);
      **(uint **)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + iVar2) =
           *(uint *)((int)g_LPVOID_ARRAY_02dc93c8 + iVar2);
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + iVar2) + 0xc) = iVar3;
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + iVar2) + 4) = g_INT_02dc9438;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(iVar3);
      if (iVar1 == 0) goto LAB_0052c3d6;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_INT_02dc943c);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_005286d0
                    (((double)g_INT_02dc9434 / (double)g_INT_02dc942c) * 0.33333333333333298);
  if (iVar3 != 0) {
    return 1;
  }
LAB_0052c3d6:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
