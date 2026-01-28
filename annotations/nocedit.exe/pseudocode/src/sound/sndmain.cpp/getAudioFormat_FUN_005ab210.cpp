// Name: sound_sndmain.cpp_getAudioFormat_FUN_005ab210
// Address: 005ab210
// Address Range: [[005ab210, 005ab243]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_005ab210(int *bits_per_sample,int *channels,int *sample_rate)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getAudioFormat_FUN_005ab210(int *bits_per_sample,int *channels,int *sample_rate)

{
  if (bits_per_sample != (int *)0x0) {
    *bits_per_sample = g_AudioBitsPerSample;
  }
  if (channels != (int *)0x0) {
    *channels = g_AudioChannelCount;
  }
  if (sample_rate == (int *)0x0) {
    return;
  }
  *sample_rate = g_AudioSampleRate;
  return;
}
