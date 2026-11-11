// Name: support_codec.cpp_CAsciiArmor_flush_FUN_00443920
// Address: 00443920
// Address Range: [[00443920, 0044396a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00443920(CAsciiArmor *this_ptr,int *param_2)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00443920(CAsciiArmor *this_ptr,int *param_2)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = support_codec_cpp_FUN_004425e0(&this_ptr->bit_buffer,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*param_2 + 4))(param_2,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  return 1;
}
