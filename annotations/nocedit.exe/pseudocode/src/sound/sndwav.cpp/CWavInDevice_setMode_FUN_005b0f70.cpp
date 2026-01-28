// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70
// Address: 005b0f70
// Address Range: [[005b0f70, 005b12d0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70 (CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate, int *out_samples_per_block)

#include "nocturne.h"

int __cdecl
sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70
          (CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,
          int *out_samples_per_block)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int in_stack_00000018;
  tagWAVEINCAPSA tStack_54;
  WAVEFORMATEX WStack_24;
  
  iVar2 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar2 == 0) {
    return 0;
  }
  MVar3 = (*g_waveInGetDevCapsAFunc)(g_WaveInDeviceID,&tStack_54,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  g_WaveInRequestedBitsPerSample = (int)out_samples_per_block;
  g_WaveInStereoRequested = (int)(in_stack_00000018 != 0);
  WStack_24._16_4_ = tStack_54.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = -1;
    do {
      if ((*(uint *)((int)&g_WaveInFormatTable[0].format_flags + iVar8) & WStack_24._16_4_) != 0) {
        uVar4 = (uint)(channels < *(int *)((int)&g_WaveInFormatTable[0].bits_per_sample + iVar8));
        if (*(int *)((int)&g_WaveInFormatTable[0].bits_per_sample + iVar8) < channels) {
          uVar4 = uVar4 + 2;
        }
        if (g_WaveInRequestedBitsPerSample <
            *(int *)((int)&g_WaveInFormatTable[0].sample_rate + iVar8)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&g_WaveInFormatTable[0].sample_rate + iVar8) <
            g_WaveInRequestedBitsPerSample) {
          uVar4 = uVar4 + 2;
        }
        if (sample_rate < *(int *)((int)&g_WaveInFormatTable[0].channels + iVar8)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&g_WaveInFormatTable[0].channels + iVar8) < sample_rate) {
          uVar4 = uVar4 + 3;
        }
        if (uVar4 < uVar9) {
          uVar9 = uVar4;
          iVar2 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < 0xc);
    g_WaveInRequestedChannels = channels;
    g_WaveInRequestedSampleRate = sample_rate;
    if (iVar2 < 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    g_WaveInBitsPerSample = g_WaveInFormatTable[iVar2].bits_per_sample;
    g_WaveInChannels = g_WaveInFormatTable[iVar2].channels;
    g_WaveInSampleRate = g_WaveInFormatTable[iVar2].sample_rate;
    g_WaveInIs8Bit = (int)(g_WaveInBitsPerSample == 8);
    g_WaveInBufferSizeSamples = g_WaveInSampleRate / 0x14;
    g_WaveInNumBuffers = (g_WaveInSampleRate * 2) / g_WaveInBufferSizeSamples;
    if (0x14 < g_WaveInNumBuffers) {
      g_WaveInNumBuffers = 0x14;
    }
    iVar7 = 0;
    if (0 < g_WaveInNumBuffers) {
      iVar8 = 0;
      do {
        pvVar5 = (*g_GlobalAllocFunc)
                           (0x2002,((int)((g_WaveInBitsPerSample +
                                          (g_WaveInBitsPerSample >> 0x1f) * -8) -
                                         (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) *
                                   g_WaveInBufferSizeSamples * g_WaveInChannels);
        *(HGLOBAL *)((int)g_WaveInBufferHandles + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = (*g_GlobalLockFunc)(pvVar5);
        *(LPVOID *)((int)g_WaveInBuffers + iVar8) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = (*g_GlobalAllocFunc)(0x2002,0x20);
        *(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = (*g_GlobalLockFunc)(*(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar8));
        iVar1 = g_WaveInNumBuffers;
        *(LPVOID *)((int)g_WaveInHeaders + iVar8) = pvVar6;
        iVar8 = iVar8 + 4;
      } while (iVar7 < iVar1);
    }
    if (g_WaveInNumBuffers <= iVar7) {
      WStack_24.wFormatTag = 1;
      WStack_24.wBitsPerSample = (WORD)g_WaveInBitsPerSample;
      WStack_24.nChannels = (WORD)g_WaveInChannels;
      WStack_24.nBlockAlign =
           (short)((int)(g_WaveInBitsPerSample & 0xffffU) >> 3) * (WORD)g_WaveInChannels;
      WStack_24.nSamplesPerSec = g_WaveInSampleRate;
      WStack_24.nAvgBytesPerSec = g_WaveInSampleRate * (uint)WStack_24.nBlockAlign;
      MVar3 = (*g_waveInOpenFunc)(&g_WaveInHandle,g_WaveOutDeviceID,&WStack_24,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar7 = (*(code *)**(uint **)bits_per_sample)();
    if (iVar7 == 0) {
      return 0;
    }
    WStack_24._16_4_ = WStack_24._16_4_ & ~g_WaveInFormatTable[iVar2].format_flags;
    channels = g_WaveInRequestedChannels;
    sample_rate = g_WaveInRequestedSampleRate;
  } while( true );
}
