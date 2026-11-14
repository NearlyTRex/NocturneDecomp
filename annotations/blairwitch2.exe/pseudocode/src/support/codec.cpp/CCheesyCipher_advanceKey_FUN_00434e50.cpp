// Name: support_codec.cpp_CCheesyCipher_advanceKey_FUN_00434e50
// Address: 00434e50
// Address Range: [[00434e50, 00434e64]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_00434e50(CCheesyCipher *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_00434e50(CCheesyCipher *this_ptr)

{
  this_ptr->key_state = this_ptr->key_state * 0x2ff0bd + 1 & 0xffffff;
  return;
}
