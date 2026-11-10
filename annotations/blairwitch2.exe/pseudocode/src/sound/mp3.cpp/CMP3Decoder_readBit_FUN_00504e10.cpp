// Name: sound_mp3.cpp_CMP3Decoder_readBit_FUN_00504e10
// Address: 00504e10
// Address Range: [[00504e10, 00504e1f]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(CMP3Decoder *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(CMP3Decoder *this_ptr)

{
  uint uVar1;
  
  uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30(this_ptr,1);
  return uVar1;
}
