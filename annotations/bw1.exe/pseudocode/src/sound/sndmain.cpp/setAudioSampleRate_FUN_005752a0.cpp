// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_005752a0
// Address: 005752a0
// Address Range: [[005752a0, 005752b9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005752a0(int sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005752a0(int sample_rate)

{
  int channels;
  int bits_per_sample;
  
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
  sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(bits_per_sample,channels,sample_rate);
  return;
}
