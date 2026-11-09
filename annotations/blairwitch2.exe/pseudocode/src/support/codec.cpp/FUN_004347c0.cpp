// Name: support_codec.cpp_FUN_004347c0
// Address: 004347c0
// Address Range: [[004347c0, 00434806]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_FUN_004347c0(CLZWCompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_FUN_004347c0(CLZWCompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004342d0
            ((CLZWDictionary *)&this_ptr->field_0x4,*(int *)&this_ptr->field_0x20,
             *(int *)&this_ptr->field_0x24);
  support_codec_cpp_FUN_00433760((SBitBuffer *)&this_ptr->field_0x18);
  *(uint *)&this_ptr->field_0x30 = 0xffffffff;
  *(uint *)&this_ptr->field_0x34 = 0xffffffff;
  *(uint *)&this_ptr->field_0x38 = 0xffffffff;
  *(uint *)&this_ptr->field_0x3c = 0xffffffff;
  return;
}
