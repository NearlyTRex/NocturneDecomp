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
  if (0 < g_WaveOutNumBuffers) {
    iVar2 = 0;
    do {
      memset(*(void **)((int)g_WaveOutHeaders + iVar2),0,0x20);
      **(uint **)((int)g_WaveOutHeaders + iVar2) =
           *(uint *)((int)g_WaveOutBuffers + iVar2);
      *(int *)(*(int *)((int)g_WaveOutHeaders + iVar2) + 0xc) = iVar3;
      *(int *)(*(int *)((int)g_WaveOutHeaders + iVar2) + 4) =
           g_WaveOutChannels *
           ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
                 (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(iVar3);
      if (iVar1 == 0) goto LAB_0055d9d0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_WaveOutNumBuffers);
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_00558d70
                    (__BITCAST_DOUBLE(CONCAT44(unaff_EDI,
                                      ((float)g_WaveOutBufferSize / (float)g_WaveOutSampleRate) *
                                      (float)0.33333333333333298)));
  if (iVar3 != 0) {
    return 1;
  }
LAB_0055d9d0:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
