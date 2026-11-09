// Name: support_codec.cpp_FUN_00434290
// Address: 00434290
// Address Range: [[00434290, 004342c7]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_FUN_00434290(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_FUN_00434290(CLZWDictionary *this_ptr)

{
  if (*(int *)(this_ptr + 0x10) == 0) {
    *(uint *)(this_ptr + 0xc) = 0;
    *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
    return;
  }
  FUN_005b86a0(*(int *)(this_ptr + 0x10));
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
  return;
}
