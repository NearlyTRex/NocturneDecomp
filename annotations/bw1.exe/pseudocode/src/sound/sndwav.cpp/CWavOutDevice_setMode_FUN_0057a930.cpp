// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0057a930
// Address: 0057a930
// Address Range: [[0057a930, 0057ab05]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0057a930(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0057a930(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  int iVar1;
  float fVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  MMRESULT MVar5;
  int iVar6;
  double dVar7;
  WAVEFORMATEX WStack_24;
  
  iVar1 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  g_INT_02c828c4 = channels;
  g_INT_02c828c8 = sample_rate;
  g_INT_02c828d4 = 4;
  g_INT_02c828cc = (int)out_samples_per_block;
  WStack_24.wFormatTag = 0xa97a;
  WStack_24.nChannels = 0x57;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_00576030();
  WStack_24.wFormatTag = 0xa997;
  WStack_24.nChannels = 0x57;
  dVar7 = round
                    ((double)(((float)g_INT_02c828cc * fVar2) / (float)g_INT_02c828d4));
  g_INT_02c828d0 = (int)ROUND(dVar7);
  iVar1 = 0;
  g_INT_02c828d0 = g_INT_02c828d0 + 0xfU & 0xfffffff0;
  if (0 < g_INT_02c828d4) {
    iVar6 = 0;
    do {
      pvVar3 = GlobalAlloc(0x2002,((int)((g_INT_02c828c4 + (g_INT_02c828c4 >> 0x1f) * -8) -
                                        (uint)((g_INT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) *
                                  g_INT_02c828d0 * g_INT_02c828c8);
      *(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02c82884 + iVar6) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_0057aadc;
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)((int)g_LPVOID_ARRAY_02c828a4 + iVar6) = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_0057aadc;
      pvVar3 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02c82844 + iVar6) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_0057aadc;
      iVar1 = iVar1 + 1;
      pvVar4 = GlobalLock(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02c82844 + iVar6));
      *(LPVOID *)((int)g_LPWAVEHDR_ARRAY_02c82864 + iVar6) = pvVar4;
      iVar6 = iVar6 + 4;
    } while (iVar1 < g_INT_02c828d4);
  }
  WStack_24.wBitsPerSample = (WORD)g_INT_02c828c4;
  WStack_24.nChannels = (WORD)g_INT_02c828c8;
  WStack_24.wFormatTag = 1;
  WStack_24.nBlockAlign = (short)((int)(g_INT_02c828c4 & 0xffffU) >> 3) * (WORD)g_INT_02c828c8;
  WStack_24.nSamplesPerSec = g_INT_02c828cc;
  WStack_24.nAvgBytesPerSec = g_INT_02c828cc * (uint)WStack_24.nBlockAlign;
  MVar5 = waveOutOpen((LPHWAVEOUT)&g_INT_02c82840,g_INT_006235d4,&WStack_24,0,0,0);
  if (MVar5 == 0) {
    *out_samples_per_block = g_INT_02c828d0;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutOpen failed");
LAB_0057aadc:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
