// Name: support_codec.cpp_CCheesyCipher_transformByte_FUN_00434d60
// Address: 00434d60
// Address Range: [[00434d60, 00434dc9]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00434d60(CCheesyCipher *this_ptr,byte value)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00434d60(CCheesyCipher *this_ptr,byte value)

{
  uint extraout_EAX;
  
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_00434e50(this_ptr);
  if (this_ptr->mode == 0) {
    return (uint)(byte)(&DAT_00609b88)[(uint)value + this_ptr->key_state & 0xff];
  }
  if (this_ptr->mode == 1) {
    return (uint)(byte)((&DAT_00609c88)[value] - (char)this_ptr->key_state);
  }
  g_CurrentFilename = "..\\support\\codec.cpp";
  g_CurrentLineNumber = 1797;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid mode.");
  return extraout_EAX & 0xffffff00;
}
