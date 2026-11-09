// Name: sound_sndmain.cpp_setAudioBitDepth_FUN_005583d0
// Address: 005583d0
// Address Range: [[005583d0, 005583e9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005583d0(int bit_depth)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005583d0(int bit_depth)

{
  int sample_rate;
  int channels;
  
  sample_rate = sound_sndmain_cpp_FUN_00558390();
  channels = sound_sndmain_cpp_FUN_005583b0();
  sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(bit_depth,channels,sample_rate);
  return;
}
