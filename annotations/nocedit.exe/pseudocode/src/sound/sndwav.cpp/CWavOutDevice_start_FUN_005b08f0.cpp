// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0
// Address: 005b08f0
// Address Range: [[005b08f0, 005b09b6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice *this_ptr)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_WaveOutNumBuffers) {
    iVar3 = 0;
    do {
      crt_memory_c_memset_FUN_005fde40(*(void **)((int)g_WaveOutHeaders + iVar3),0,0x20);
      **(uint **)((int)g_WaveOutHeaders + iVar3) =
           *(uint *)((int)g_WaveOutBuffers + iVar3);
      *(int *)(*(int *)((int)g_WaveOutHeaders + iVar3) + 0xc) = buffer_index;
      *(int *)(*(int *)((int)g_WaveOutHeaders + iVar3) + 4) =
           g_WaveOutChannels *
           ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
                 (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(buffer_index);
      if (iVar1 == 0) goto LAB_005b09a0;
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < g_WaveOutNumBuffers);
  }
  pvVar2 = sound_sndmain_cpp_startSoundThread_FUN_005abc00
                     (((double)g_WaveOutBufferSize / (double)g_WaveOutSampleRate) * 0.33333333333333298)
  ;
  if (pvVar2 != (HANDLE)0x0) {
    return 1;
  }
LAB_005b09a0:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
