// Name: sound_sndmain.cpp_setAudioBitDepth_FUN_00575260
// Address: 00575260
// Address Range: [[00575260, 00575279]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_00575260(int bit_depth)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_00575260(int bit_depth)

{
  int sample_rate;
  int channels;
  
  sample_rate = sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
  sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(bit_depth,channels,sample_rate);
  return;
}
