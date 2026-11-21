// Name: support_codec.cpp_CCheesyCipher_transformByte_FUN_004416e0
// Address: 004416e0
// Address Range: [[004416e0, 00441749]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_004416e0(CCheesyCipher *this_ptr,byte value)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_004416e0(CCheesyCipher *this_ptr,byte value)

{
  uint extraout_EAX;
  
  support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(this_ptr);
  if (this_ptr->mode == 0) {
    return (uint)(byte)(&DAT_005f1368)[(uint)value + this_ptr->key_state & 0xff];
  }
  if (this_ptr->mode == 1) {
    return (uint)(byte)((&DAT_005f1468)[value] - (char)this_ptr->key_state);
  }
  g_CurrentFilename = "..\\support\\codec.cpp";
  g_CurrentLineNumber = 1803;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid mode.");
  return extraout_EAX & 0xffffff00;
}
