// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30
// Address: 005b0a30
// Address Range: [[005b0a30, 005b0c05]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

{
  int iVar1;
  float fVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  MMRESULT MVar5;
  int iVar6;
  int *in_stack_00000018;
  WORD WStack_20;
  WORD WStack_1e;
  DWORD DStack_1c;
  DWORD DStack_18;
  ushort uStack_14;
  WORD WStack_12;
  
  iVar1 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  g_WaveOutBitsPerSample = channels;
  g_WaveOutChannels = sample_rate;
  g_WaveOutNumBuffers = 4;
  g_WaveOutSampleRate = (int)out_buffer_size;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  g_WaveOutBufferSize =
       (int)ROUND(ROUND(((float)g_WaveOutSampleRate * fVar2) / (float)g_WaveOutNumBuffers));
  iVar1 = 0;
  g_WaveOutBufferSize = g_WaveOutBufferSize + 0xfU & 0xfffffff0;
  if (0 < g_WaveOutNumBuffers) {
    iVar6 = 0;
    do {
      pvVar3 = (*g_GlobalAllocFunc)
                         (0x2002,((int)((g_WaveOutBitsPerSample +
                                        (g_WaveOutBitsPerSample >> 0x1f) * -8) -
                                       (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) *
                                 g_WaveOutBufferSize * g_WaveOutChannels);
      *(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar6) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      pvVar4 = (*g_GlobalLockFunc)(pvVar3);
      *(LPVOID *)((int)g_WaveOutBuffers + iVar6) = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_005b0bdc;
      pvVar3 = (*g_GlobalAllocFunc)(0x2002,0x20);
      *(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar6) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      iVar1 = iVar1 + 1;
      pvVar4 = (*g_GlobalLockFunc)(*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar6));
      *(LPVOID *)((int)g_WaveOutHeaders + iVar6) = pvVar4;
      iVar6 = iVar6 + 4;
    } while (iVar1 < g_WaveOutNumBuffers);
  }
  WStack_20 = 1;
  WStack_12 = (WORD)g_WaveOutBitsPerSample;
  WStack_1e = (WORD)g_WaveOutChannels;
  uStack_14 = (short)((int)(g_WaveOutBitsPerSample & 0xffffU) >> 3) * (WORD)g_WaveOutChannels;
  DStack_1c = g_WaveOutSampleRate;
  DStack_18 = g_WaveOutSampleRate * (uint)uStack_14;
  MVar5 = (*g_waveOutOpenFunc)(&g_WaveOutHandle,g_WaveOutDeviceID,(LPCWAVEFORMATEX)&WStack_20,0,0,0)
  ;
  if (MVar5 == 0) {
    *in_stack_00000018 = g_WaveOutBufferSize;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutOpen failed");
LAB_005b0bdc:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
