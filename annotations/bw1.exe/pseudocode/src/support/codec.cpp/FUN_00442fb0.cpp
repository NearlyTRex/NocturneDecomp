// Name: support_codec.cpp_FUN_00442fb0
// Address: 00442fb0
// Address Range: [[00442fb0, 00442fe7]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_FUN_00442fb0(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_FUN_00442fb0(CLZWDictionary *this_ptr)

{
  if (*(int *)(this_ptr + 0x10) == 0) {
    *(uint *)(this_ptr + 0xc) = 0;
    *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
    return;
  }
  FUN_005c09f0(*(int *)(this_ptr + 0x10));
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
  return;
}
