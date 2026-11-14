// Name: support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70
// Address: 00443b70
// Address Range: [[00443b70, 00443b84]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_00443b70(CCheesyCipher *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_00443b70(CCheesyCipher *this_ptr)

{
  this_ptr->key_state = this_ptr->key_state * 0x2ff0bd + 1 & 0xffffff;
  return;
}
