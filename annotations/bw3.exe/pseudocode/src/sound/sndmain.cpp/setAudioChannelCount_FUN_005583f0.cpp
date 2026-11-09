// Name: sound_sndmain.cpp_setAudioChannelCount_FUN_005583f0
// Address: 005583f0
// Address Range: [[005583f0, 00558409]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005583f0(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005583f0(int channel_count)

{
  int sample_rate;
  int bits_per_sample;
  
  sample_rate = sound_sndmain_cpp_FUN_00558390();
  bits_per_sample = sound_sndmain_cpp_FUN_00558370();
  sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(bits_per_sample,channel_count,sample_rate);
  return;
}
