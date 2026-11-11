// Name: support_codec.cpp_CCheesyCipher_setKey_FUN_00443a50
// Address: 00443a50
// Address Range: [[00443a50, 00443a74]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_00443a50(CCheesyCipher *this_ptr,uint param_2)

#include "nocturne.h"

void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_00443a50(CCheesyCipher *this_ptr,uint param_2)

{
  this_ptr->key_state = param_2 & 0xffffff;
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00443b70(this_ptr);
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00443b70(this_ptr);
  return;
}
