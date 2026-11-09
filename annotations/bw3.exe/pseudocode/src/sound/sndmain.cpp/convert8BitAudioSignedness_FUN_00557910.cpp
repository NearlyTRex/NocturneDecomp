// Name: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_00557910
// Address: 00557910
// Address Range: [[00557910, 0055792c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00557910(byte *buffer,int num_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00557910(byte *buffer,int num_bytes)

{
  for (; 0 < num_bytes; num_bytes = num_bytes + -1) {
    *buffer = *buffer ^ 0x80;
    buffer = buffer + 1;
  }
  return;
}
