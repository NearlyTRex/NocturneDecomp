// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_00558410
// Address: 00558410
// Address Range: [[00558410, 00558429]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00558410(int sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00558410(int sample_rate)

{
  int channels;
  int bits_per_sample;
  
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
  sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(bits_per_sample,channels,sample_rate);
  return;
}
