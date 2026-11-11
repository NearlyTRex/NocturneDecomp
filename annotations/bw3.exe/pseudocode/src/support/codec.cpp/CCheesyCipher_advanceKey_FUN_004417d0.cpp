// Name: support_codec.cpp_CCheesyCipher_advanceKey_FUN_004417d0
// Address: 004417d0
// Address Range: [[004417d0, 004417e4]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(CCheesyCipher *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(CCheesyCipher *this_ptr)

{
  this_ptr->key_state = this_ptr->key_state * 0x2ff0bd + 1 & 0xffffff;
  return;
}
