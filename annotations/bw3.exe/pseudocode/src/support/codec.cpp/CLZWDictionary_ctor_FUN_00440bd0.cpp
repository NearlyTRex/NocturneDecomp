// Name: support_codec.cpp_CLZWDictionary_ctor_FUN_00440bd0
// Address: 00440bd0
// Address Range: [[00440bd0, 00440be7]]
// Convention: __cdecl
// Signature: CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00440bd0(CLZWDictionary *this_ptr)

#include "nocturne.h"

CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00440bd0(CLZWDictionary *this_ptr)

{
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
  return this_ptr;
}
