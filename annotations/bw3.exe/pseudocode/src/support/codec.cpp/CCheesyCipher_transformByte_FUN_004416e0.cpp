// Name: support_codec.cpp_CCheesyCipher_transformByte_FUN_004416e0
// Address: 004416e0
// Address Range: [[004416e0, 00441749]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_004416e0(CCheesyCipher *this_ptr,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_004416e0(CCheesyCipher *this_ptr,byte param_2)

{
  uint uVar1;
  
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(this_ptr);
  if (this_ptr->mode == 0) {
    return (uint)(byte)(&DAT_005f1368)[(uint)param_2 + this_ptr->key_state & 0xff];
  }
  if (this_ptr->mode == 1) {
    return (uint)(byte)((&DAT_005f1468)[param_2] - (char)this_ptr->key_state);
  }
  _DAT_01d71de0 = "..\\support\\codec.cpp";
  _DAT_01d71de4 = 0x70b;
  uVar1 = core_main_c_FUN_004e4330("Invalid mode.");
  return uVar1 & 0xffffff00;
}
