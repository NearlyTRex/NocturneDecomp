// Name: sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20
// Address: 005b0e20
// Address Range: [[005b0e20, 005b0f01]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20(CWavInDevice * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005b0e20(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_WaveInNumBuffers) {
    iVar3 = 0;
    do {
      crt_memory_c_memset_FUN_005fde40(*(void **)((int)g_WaveInHeaders + iVar3),0,0x20);
      **(uint **)((int)g_WaveInHeaders + iVar3) =
           *(uint *)((int)g_WaveInBuffers + iVar3);
      *(int *)(*(int *)((int)g_WaveInHeaders + iVar3) + 0xc) = buffer_index;
      *(int *)(*(int *)((int)g_WaveInHeaders + iVar3) + 4) =
           ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
                 (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveInBufferSizeSamples
           * g_WaveInChannels;
      iVar1 = sound_sndwav_cpp_writeWavInBuffer_FUN_005b0cc0(buffer_index);
      if (iVar1 == 0) {
        (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < g_WaveInNumBuffers);
  }
  g_WaveInCurrentBufferIndex = g_WaveInNumBuffers + -1;
  g_WaveInCurrentSampleOffset = g_WaveInBufferSizeSamples;
  MVar2 = (*g_waveInStartFunc)(g_WaveInHandle);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInStart failed!");
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
