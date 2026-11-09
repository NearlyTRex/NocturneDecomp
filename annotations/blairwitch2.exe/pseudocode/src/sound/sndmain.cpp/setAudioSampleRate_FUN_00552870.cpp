// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_00552870
// Address: 00552870
// Address Range: [[00552870, 00552889]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00552870(int sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00552870(int sample_rate)

{
  int channels;
  int bits_per_sample;
  
  channels = sound_sndmain_cpp_FUN_00552810();
  bits_per_sample = sound_sndmain_cpp_FUN_005527d0();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(bits_per_sample,channels,sample_rate);
  return;
}
