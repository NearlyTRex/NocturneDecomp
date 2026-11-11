// Name: support_codec.cpp_CCheesyCipher_setKey_FUN_00434d30
// Address: 00434d30
// Address Range: [[00434d30, 00434d54]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_00434d30(CCheesyCipher *this_ptr,uint param_2)

#include "nocturne.h"

void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_00434d30(CCheesyCipher *this_ptr,uint param_2)

{
  this_ptr->key_state = param_2 & 0xffffff;
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00434e50(this_ptr);
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00434e50(this_ptr);
  return;
}
