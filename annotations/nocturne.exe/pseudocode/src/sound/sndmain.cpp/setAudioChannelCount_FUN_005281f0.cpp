// Name: sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0
// Address: 005281f0
// Address Range: [[005281f0, 00528209]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(int channel_count)

{
  int sample_rate;
  int bits_per_sample;
  
  sample_rate = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(bits_per_sample,channel_count,sample_rate);
  return;
}
