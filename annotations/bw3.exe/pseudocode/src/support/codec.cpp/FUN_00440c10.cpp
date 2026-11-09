// Name: support_codec.cpp_FUN_00440c10
// Address: 00440c10
// Address Range: [[00440c10, 00440c47]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_FUN_00440c10(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_FUN_00440c10(CLZWDictionary *this_ptr)

{
  if (*(int *)(this_ptr + 0x10) == 0) {
    *(uint *)(this_ptr + 0xc) = 0;
    *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
    return;
  }
  FUN_005a3770(*(int *)(this_ptr + 0x10));
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
  return;
}
