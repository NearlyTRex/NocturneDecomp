// Name: support_codec.cpp_CAsciiArmor_flush_FUN_00443920
// Address: 00443920
// Address Range: [[00443920, 0044396a]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00443920(CAsciiArmor *this_ptr,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00443920(CAsciiArmor *this_ptr,void *ostream)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = support_codec_cpp_FUN_004425e0(&this_ptr->bit_buffer,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*(int *)ostream + 4))(ostream,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  return 1;
}
