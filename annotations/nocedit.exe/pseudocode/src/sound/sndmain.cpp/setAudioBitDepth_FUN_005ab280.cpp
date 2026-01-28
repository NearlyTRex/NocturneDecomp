// Name: sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280
// Address: 005ab280
// Address Range: [[005ab280, 005ab299]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(int bit_depth)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(int bit_depth)

{
  int sample_rate;
  int channels;
  
  sample_rate = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(bit_depth,channels,sample_rate);
  return;
}
