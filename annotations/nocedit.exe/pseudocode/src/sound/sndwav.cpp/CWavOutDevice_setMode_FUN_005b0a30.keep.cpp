// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30
// Address: 005b0a30
// MANUAL RECONSTRUCTION
// Address Range: [[005b0a30, 005b0c05]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

{
  int iVar1;
  float fVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  MMRESULT MVar5;
  WAVEFORMATEX format;


  iVar1 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  g_WaveOutBitsPerSample = bits_per_sample;
  g_WaveOutChannels = channels;
  g_WaveOutNumBuffers = 4;
  g_WaveOutSampleRate = sample_rate;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  g_WaveOutBufferSize =
       (int)ROUND(ROUND(((float)g_WaveOutSampleRate * fVar2) / (float)g_WaveOutNumBuffers));
  iVar1 = 0;
  g_WaveOutBufferSize = g_WaveOutBufferSize + 0xfU & 0xfffffff0;
  if (0 < g_WaveOutNumBuffers) {
    do {
      pvVar3 = (*g_GlobalAllocFunc)
                         (0x2002,
                          (g_WaveOutBitsPerSample / 8) * g_WaveOutBufferSize * g_WaveOutChannels);
      g_WaveOutBufferHandles[iVar1] = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      pvVar4 = (*g_GlobalLockFunc)(pvVar3);
      g_WaveOutBuffers[iVar1] = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_005b0bdc;
      pvVar3 = (*g_GlobalAllocFunc)(0x2002,sizeof(wavehdr_tag));
      g_WaveOutHeaderHandles[iVar1] = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      pvVar4 = (*g_GlobalLockFunc)(g_WaveOutHeaderHandles[iVar1]);
      g_WaveOutHeaders[iVar1] = (LPWAVEHDR)pvVar4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < g_WaveOutNumBuffers);
  }
  format.wFormatTag = 1;
  format.wBitsPerSample = (WORD)g_WaveOutBitsPerSample;
  format.nChannels = (WORD)g_WaveOutChannels;
  format.nBlockAlign = (short)((int)(g_WaveOutBitsPerSample & 0xffffU) >> 3) * (WORD)g_WaveOutChannels;
  format.nSamplesPerSec = g_WaveOutSampleRate;
  format.nAvgBytesPerSec = g_WaveOutSampleRate * (uint)format.nBlockAlign;
  format.cbSize = 0;
  MVar5 = (*g_waveOutOpenFunc)(&g_WaveOutHandle,g_WaveOutDeviceID,&format,0,0,0);
  if (MVar5 == 0) {
    *out_buffer_size = g_WaveOutBufferSize;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutOpen failed");
LAB_005b0bdc:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
