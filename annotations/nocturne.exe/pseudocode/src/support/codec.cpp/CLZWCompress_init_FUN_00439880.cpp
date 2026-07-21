// Name: support_codec.cpp_CLZWCompress_init_FUN_00439880
// Address: 00439880
// Address Range: [[00439880, 004398b8]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00439880(int param_1)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00439880(int param_1)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004393d0
            (param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  support_codec_cpp_resetBitBuffer_FUN_00438a90(param_1 + 0x18);
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x34) = 0xffffffff;
  return;
}
