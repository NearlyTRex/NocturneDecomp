// Name: support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0
// Address: 00439af0
// Address Range: [[00439af0, 00439b22]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x2c) < 0) {
    return 1;
  }
  support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
            (param_1 + 4,*(int *)(param_1 + 0x2c),param_2);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  return 1;
}
