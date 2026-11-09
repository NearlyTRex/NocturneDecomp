// Name: support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70
// Address: 00442f70
// Address Range: [[00442f70, 00442f87]]
// Convention: __cdecl
// Signature: CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00442f70(CLZWDictionary *this_ptr)

#include "nocturne.h"

CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00442f70(CLZWDictionary *this_ptr)

{
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
  return this_ptr;
}
