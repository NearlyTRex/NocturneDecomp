// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30
// Address: 005b0a30
// Address Range: [[005b0a30, 005b0c05]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice * this_ptr, int bits_per_sample, int channels, int sample_rate, int * out_samples_per_block)

#include "nocturne.h"

int __cdecl
sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30
          (CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,
          int *out_samples_per_block)

{
  int iVar1;
  float fVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  MMRESULT MVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  double dVar7;
  int in_stack_00000018;
  int in_stack_0000001c;
  int *in_stack_0000003c;
  uint uStack_18;
  DWORD DStack_14;
  
  iVar1 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  g_WaveOutBitsPerSample = (int)out_samples_per_block;
  g_WaveOutChannels = in_stack_00000018;
  g_WaveOutNumBuffers = 4;
  g_WaveOutSampleRate = in_stack_0000001c;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  uStack_18._0_2_ = 0xa97;
  uStack_18._2_2_ = 0x5b;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)(((float)g_WaveOutSampleRate * fVar2) / (float)g_WaveOutNumBuffers));
  g_WaveOutBufferSize = (int)ROUND(dVar7);
  iVar1 = 0;
  g_WaveOutBufferSize = g_WaveOutBufferSize + 0xfU & 0xfffffff0;
  if (0 < g_WaveOutNumBuffers) {
    iVar6 = 0;
    do {
      pvVar3 = (*GlobalAlloc)(0x2002,((int)((g_WaveOutBitsPerSample +
                                            (g_WaveOutBitsPerSample >> 0x1f) * -8) -
                                           (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3)
                                     * g_WaveOutBufferSize * g_WaveOutChannels);
      *(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar6) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      DStack_14 = 0x5b0b01;
      pvVar4 = (*GlobalLock)(pvVar3);
      *(LPVOID *)((int)g_WaveOutBuffers + iVar6) = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_005b0bdc;
      pvVar3 = (*GlobalAlloc)(0x2002,0x20);
      *(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar6) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      iVar1 = iVar1 + 1;
      pvVar4 = (*GlobalLock)(*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar6));
      *(LPVOID *)((int)g_WaveOutHeaders + iVar6) = pvVar4;
      iVar6 = iVar6 + 4;
    } while (iVar1 < g_WaveOutNumBuffers);
  }
  uStack_18._2_2_ = (WORD)g_WaveOutChannels;
  uStack_18._0_2_ = 1;
  DStack_14 = g_WaveOutSampleRate;
  MVar5 = (*waveOutOpen)(&g_WaveOutHandle,g_WaveOutDeviceID,(LPCWAVEFORMATEX)&uStack_18,0,0,0);
  if (MVar5 == 0) {
    *in_stack_0000003c = g_WaveOutBufferSize;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutOpen failed");
LAB_005b0bdc:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
