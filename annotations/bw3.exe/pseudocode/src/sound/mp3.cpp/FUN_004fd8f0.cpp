// Name: sound_mp3.cpp_FUN_004fd8f0
// Address: 004fd8f0
// Address Range: [[004fd8f0, 004fd8ff]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_FUN_004fd8f0(CMP3Decoder *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_FUN_004fd8f0(CMP3Decoder *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004fd810(this_ptr,1);
  return uVar1;
}
