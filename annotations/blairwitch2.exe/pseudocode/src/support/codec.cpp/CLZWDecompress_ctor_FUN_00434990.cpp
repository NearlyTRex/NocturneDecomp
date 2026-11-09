// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_00434990
// Address: 00434990
// Address Range: [[00434990, 004349c0]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_00434990(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_00434990(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00433e80((CCodec *)this_ptr);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_00434250((CLZWDictionary *)(pCVar1 + 1));
  *(byte ***)(pCVar2 + -4) = &PTR_support_codec_cpp_CLZWDecompress_dtor_FUN_004354f0_005f4284;
  *(int *)(pCVar2 + 0x1c) = buffer_size;
  *(int *)(pCVar2 + 0x20) = initial_bits;
  return (CLZWDecompress *)(pCVar2 + -4);
}
