// Name: support_codec.cpp_CCheesyCipher_setKey_FUN_004416b0
// Address: 004416b0
// Address Range: [[004416b0, 004416d4]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_004416b0(CCheesyCipher *this_ptr,uint param_2)

#include "nocturne.h"

void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_004416b0(CCheesyCipher *this_ptr,uint param_2)

{
  this_ptr->key_state = param_2 & 0xffffff;
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(this_ptr);
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(this_ptr);
  return;
}
