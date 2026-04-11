// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70
// Address: 005b0f70
// MANUAL RECONSTRUCTION
// Address Range: [[005b0f70, 005b12d0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint uVar9;
  struct tagWAVEINCAPSA waveInCaps;
  WAVEFORMATEX WStack_28;
  uint uStack_14;

  iVar2 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar2 == 0) {
    return 0;
  }
  MVar3 = (*g_waveInGetDevCapsAFunc)(g_WaveInDeviceID,(LPWAVEINCAPSA)&waveInCaps,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  g_WaveInRequestedSampleRate = sample_rate;
  g_WaveInStereoRequested = (int)(stereo_flag != 0);
  uStack_14 = waveInCaps.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar2 = -1;
    do {
      if ((g_WaveInFormatTable[iVar7].format_flags & uStack_14) != 0) {
        uVar4 = (uint)(bits_per_sample < g_WaveInFormatTable[iVar7].bits_per_sample);
        if (g_WaveInFormatTable[iVar7].bits_per_sample < bits_per_sample) {
          uVar4 = uVar4 + 2;
        }
        if (g_WaveInRequestedSampleRate < g_WaveInFormatTable[iVar7].sample_rate) {
          uVar4 = uVar4 + 1;
        }
        if (g_WaveInFormatTable[iVar7].sample_rate < g_WaveInRequestedSampleRate) {
          uVar4 = uVar4 + 2;
        }
        if (channels < g_WaveInFormatTable[iVar7].channels) {
          uVar4 = uVar4 + 2;
        }
        if (g_WaveInFormatTable[iVar7].channels < channels) {
          uVar4 = uVar4 + 3;
        }
        if (uVar4 < uVar9) {
          uVar9 = uVar4;
          iVar2 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0xc);
    g_WaveInRequestedBitsPerSample = bits_per_sample;
    g_WaveInRequestedChannels = channels;
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
      do {
        pvVar5 = (*g_GlobalAllocFunc)
                           (0x2002,(g_WaveInBitsPerSample / 8) *
                                   g_WaveInBufferSizeSamples * g_WaveInChannels);
        g_WaveInBufferHandles[iVar7] = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = (*g_GlobalLockFunc)(pvVar5);
        g_WaveInBuffers[iVar7] = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = (*g_GlobalAllocFunc)(0x2002,0x20);
        g_WaveInHeaderHandles[iVar7] = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = (*g_GlobalLockFunc)(g_WaveInHeaderHandles[iVar7 - 1]);
        iVar1 = g_WaveInNumBuffers;
        g_WaveInHeaders[iVar7 - 1] = (LPWAVEHDR)pvVar6;
      } while (iVar7 < iVar1);
    }
    if (g_WaveInNumBuffers <= iVar7) {
      WStack_28.wFormatTag = 1;
      WStack_28.wBitsPerSample = (ushort)g_WaveInBitsPerSample;
      WStack_28.nChannels = (short)g_WaveInChannels;
      WStack_28.nBlockAlign =
           (short)((int)(g_WaveInBitsPerSample & 0xffffU) >> 3) * (short)g_WaveInChannels;
      WStack_28.nSamplesPerSec = g_WaveInSampleRate;
      WStack_28.nAvgBytesPerSec = g_WaveInSampleRate * (uint)WStack_28.nBlockAlign;
      MVar3 = (*g_waveInOpenFunc)(&g_WaveInHandle,g_WaveOutDeviceID,
                                  (LPCWAVEFORMATEX)&WStack_28,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar7 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
    if (iVar7 == 0) {
      return 0;
    }
    uStack_14 = uStack_14 & ~g_WaveInFormatTable[iVar2].format_flags;
    bits_per_sample = g_WaveInRequestedBitsPerSample;
    channels = g_WaveInRequestedChannels;
  } while( true );
}
