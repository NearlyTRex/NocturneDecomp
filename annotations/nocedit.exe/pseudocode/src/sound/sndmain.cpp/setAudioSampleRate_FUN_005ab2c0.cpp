// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0
// Address: 005ab2c0
// Address Range: [[005ab2c0, 005ab2d9]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate)

{
  int bits_per_sample;
  int unaff_retaddr;
  
  sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(bits_per_sample,unaff_retaddr,sample_rate);
  return;
}
