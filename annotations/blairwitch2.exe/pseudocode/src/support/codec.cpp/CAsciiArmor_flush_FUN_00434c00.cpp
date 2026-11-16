// Name: support_codec.cpp_CAsciiArmor_flush_FUN_00434c00
// Address: 00434c00
// Address Range: [[00434c00, 00434c4a]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00434c00(CAsciiArmor *this_ptr,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00434c00(CAsciiArmor *this_ptr,void *ostream)

{
  uint uVar1;
  int iStack_4;
  
  uVar1 = support_codec_cpp_takeBitBuffer_FUN_004338d0(&this_ptr->bit_buffer,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*(int *)ostream + 4))(ostream,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[uVar1]);
  return 1;
}
