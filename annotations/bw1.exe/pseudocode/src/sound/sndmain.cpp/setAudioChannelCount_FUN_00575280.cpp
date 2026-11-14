// Name: sound_sndmain.cpp_setAudioChannelCount_FUN_00575280
// Address: 00575280
// Address Range: [[00575280, 00575299]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_00575280(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_00575280(int channel_count)

{
  int sample_rate;
  int bits_per_sample;
  
  sample_rate = sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
  sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(bits_per_sample,channel_count,sample_rate);
  return;
}
