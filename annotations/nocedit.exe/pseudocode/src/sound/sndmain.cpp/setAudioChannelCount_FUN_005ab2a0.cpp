// Name: sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0
// Address: 005ab2a0
// Address Range: [[005ab2a0, 005ab2b9]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0(int channel_count)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(int channel_count)

{
  int channels;
  int bits_per_sample;
  
  channels = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(bits_per_sample,channels,channel_count);
  return;
}
