// Name: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_00551da0
// Address: 00551da0
// Address Range: [[00551da0, 00551dbf]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_00551da0(short *buffer,int num_samples)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_00551da0(short *buffer,int num_samples)

{
  for (; 0 < num_samples; num_samples = num_samples + -1) {
    *(byte *)((int)buffer + 1) = *(byte *)((int)buffer + 1) ^ 0x80;
    buffer = buffer + 1;
  }
  return;
}
