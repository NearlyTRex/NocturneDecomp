// Name: support_codec.cpp_FUN_004349d0
// Address: 004349d0
// Address Range: [[004349d0, 00434a0f]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_FUN_004349d0(CLZWDecompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_FUN_004349d0(CLZWDecompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004342d0
            ((CLZWDictionary *)&this_ptr->field_0x4,*(int *)&this_ptr->field_0x20,
             *(int *)&this_ptr->field_0x24);
  support_codec_cpp_FUN_00433760((SBitBuffer *)&this_ptr->field_0x18);
  *(uint *)&this_ptr->field_0x2c = 0xffffffff;
  *(uint *)&this_ptr->field_0x30 = 0xffffffff;
  *(uint *)&this_ptr->field_0x28 = 0xffffffff;
  return;
}
