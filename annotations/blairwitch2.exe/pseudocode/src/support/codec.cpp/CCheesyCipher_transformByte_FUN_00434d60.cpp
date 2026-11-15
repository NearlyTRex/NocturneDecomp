// Name: support_codec.cpp_CCheesyCipher_transformByte_FUN_00434d60
// Address: 00434d60
// Address Range: [[00434d60, 00434dc9]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00434d60(CCheesyCipher *this_ptr,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00434d60(CCheesyCipher *this_ptr,byte param_2)

{
  uint extraout_EAX;
  
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00434e50(this_ptr);
  if (this_ptr->mode == 0) {
    return (uint)(byte)(&DAT_00609b88)[(uint)param_2 + this_ptr->key_state & 0xff];
  }
  if (this_ptr->mode == 1) {
    return (uint)(byte)((&DAT_00609c88)[param_2] - (char)this_ptr->key_state);
  }
  _DAT_01d046a0 = "..\\support\\codec.cpp";
  _DAT_01d046a4 = 0x705;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid mode.");
  return extraout_EAX & 0xffffff00;
}
