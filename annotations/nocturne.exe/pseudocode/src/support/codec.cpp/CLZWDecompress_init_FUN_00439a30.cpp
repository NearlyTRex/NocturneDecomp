// Name: support_codec.cpp_CLZWDecompress_init_FUN_00439a30
// Address: 00439a30
// Address Range: [[00439a30, 00439a68]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00439a30(int param_1)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00439a30(int param_1)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004393d0
            (param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  support_codec_cpp_resetBitBuffer_FUN_00438a90(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  return;
}
