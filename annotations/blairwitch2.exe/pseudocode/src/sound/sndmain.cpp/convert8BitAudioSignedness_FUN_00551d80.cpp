// Name: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00551d80
// Address: 00551d80
// Address Range: [[00551d80, 00551d9c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00551d80(byte *buffer,int num_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00551d80(byte *buffer,int num_bytes)

{
  for (; 0 < num_bytes; num_bytes = num_bytes + -1) {
    *buffer = *buffer ^ 0x80;
    buffer = buffer + 1;
  }
  return;
}
