// Name: support_codec.cpp_CCheesyCipher_transformByte_FUN_00443a80
// Address: 00443a80
// Address Range: [[00443a80, 00443ae9]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00443a80(CCheesyCipher *this_ptr,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00443a80(CCheesyCipher *this_ptr,byte param_2)

{
  uint uVar1;
  
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00443b70(this_ptr);
  if (this_ptr->mode == 0) {
    return (uint)(byte)(&DAT_00610db8)[(uint)param_2 + this_ptr->key_state & 0xff];
  }
  if (this_ptr->mode == 1) {
    return (uint)(byte)((&DAT_00610eb8)[param_2] - (char)this_ptr->key_state);
  }
  _DAT_01d1d400 = "..\\support\\codec.cpp";
  _DAT_01d1d404 = 0x70b;
  uVar1 = core_main_c_FUN_005030e0("Invalid mode.");
  return uVar1 & 0xffffff00;
}
