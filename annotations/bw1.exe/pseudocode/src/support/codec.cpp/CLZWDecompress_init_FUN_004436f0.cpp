// Name: support_codec.cpp_CLZWDecompress_init_FUN_004436f0
// Address: 004436f0
// Address Range: [[004436f0, 0044372f]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_004436f0(CLZWDecompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_004436f0(CLZWDecompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_00442ff0
            ((CLZWDictionary *)&this_ptr->field_0x4,*(int *)&this_ptr->field_0x20,
             *(int *)&this_ptr->field_0x24);
  support_codec_cpp_resetBitBuffer_FUN_00442470((SBitBuffer *)&this_ptr->field_0x18);
  *(uint *)&this_ptr->field_0x2c = 0xffffffff;
  *(uint *)&this_ptr->field_0x30 = 0xffffffff;
  *(uint *)&this_ptr->field_0x28 = 0xffffffff;
  return;
}
