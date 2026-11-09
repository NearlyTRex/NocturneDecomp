// Name: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_00557930
// Address: 00557930
// Address Range: [[00557930, 0055794f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_00557930(short *buffer,int num_samples)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_00557930(short *buffer,int num_samples)

{
  for (; 0 < num_samples; num_samples = num_samples + -1) {
    *(byte *)((int)buffer + 1) = *(byte *)((int)buffer + 1) ^ 0x80;
    buffer = buffer + 1;
  }
  return;
}
