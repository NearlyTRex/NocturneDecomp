// Name: sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0
// Address: 005281d0
// Address Range: [[005281d0, 005281e9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(int bit_depth)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(int bit_depth)

{
  int sample_rate;
  int channels;
  
  sample_rate = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(bit_depth,channels,sample_rate);
  return;
}
