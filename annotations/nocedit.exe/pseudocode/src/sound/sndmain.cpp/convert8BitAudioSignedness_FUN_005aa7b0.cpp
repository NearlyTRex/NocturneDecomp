// Name: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0
// Address: 005aa7b0
// Address Range: [[005aa7b0, 005aa7cc]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte * buffer, int num_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte *buffer,int num_bytes)

{
  for (; 0 < num_bytes; num_bytes = num_bytes + -1) {
    *buffer = *buffer ^ 0x80;
    buffer = buffer + 1;
  }
  return;
}
