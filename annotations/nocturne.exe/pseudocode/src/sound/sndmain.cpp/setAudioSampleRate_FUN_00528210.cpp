// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_00528210
// Address: 00528210
// Address Range: [[00528210, 00528229]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(int sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(int sample_rate)

{
  int channels;
  int bits_per_sample;
  
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(bits_per_sample,channels,sample_rate);
  return;
}
