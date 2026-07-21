// Name: sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
// Address: 004e7d90
// Address Range: [[004e7d90, 004e7dc2]]
// Convention: __cdecl
// Signature: undefined1 * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(undefined1 *param_1)

#include "nocturne.h"

byte * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(byte *param_1)

{
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x10c) = 0;
  memset(param_1 + 0x5320,0,0x2c);
  *param_1 = 0;
  return param_1;
}
