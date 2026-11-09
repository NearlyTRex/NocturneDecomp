// Name: sound_sndmain.cpp_setAudioBitDepth_FUN_00552830
// Address: 00552830
// Address Range: [[00552830, 00552849]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_00552830(int bit_depth)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_00552830(int bit_depth)

{
  int sample_rate;
  int channels;
  
  sample_rate = sound_sndmain_cpp_FUN_005527f0();
  channels = sound_sndmain_cpp_FUN_00552810();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(bit_depth,channels,sample_rate);
  return;
}
