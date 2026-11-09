// Name: support_codec.cpp_CLZWDictionary_ctor_FUN_00434250
// Address: 00434250
// Address Range: [[00434250, 00434267]]
// Convention: __cdecl
// Signature: CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary *this_ptr)

#include "nocturne.h"

CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary *this_ptr)

{
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)this_ptr = *(uint *)(this_ptr + 0xc);
  return this_ptr;
}
