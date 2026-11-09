// Name: sound_sndmain.cpp_setAudioChannelCount_FUN_00552850
// Address: 00552850
// Address Range: [[00552850, 00552869]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_00552850(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_00552850(int channel_count)

{
  int sample_rate;
  int bits_per_sample;
  
  sample_rate = sound_sndmain_cpp_FUN_005527f0();
  bits_per_sample = sound_sndmain_cpp_FUN_005527d0();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(bits_per_sample,channel_count,sample_rate);
  return;
}
