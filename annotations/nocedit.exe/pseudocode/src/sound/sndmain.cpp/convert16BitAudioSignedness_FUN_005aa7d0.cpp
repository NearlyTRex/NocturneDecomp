// Name: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0
// Address: 005aa7d0
// Address Range: [[005aa7d0, 005aa7ef]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_005aa7d0(short *buffer,int num_samples)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_005aa7d0(short *buffer,int num_samples)

{
  for (; 0 < num_samples; num_samples = num_samples + -1) {
    *(byte *)((int)buffer + 1) = *(byte *)((int)buffer + 1) ^ 0x80;
    buffer = buffer + 1;
  }
  return;
}
