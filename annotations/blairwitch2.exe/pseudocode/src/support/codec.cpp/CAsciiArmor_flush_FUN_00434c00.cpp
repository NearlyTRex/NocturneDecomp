// Name: support_codec.cpp_CAsciiArmor_flush_FUN_00434c00
// Address: 00434c00
// Address Range: [[00434c00, 00434c4a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00434c00(CAsciiArmor *this_ptr,int *param_2)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CAsciiArmor_flush_FUN_00434c00(CAsciiArmor *this_ptr,int *param_2)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = support_codec_cpp_FUN_004338d0(&this_ptr->bit_buffer,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*param_2 + 4))(param_2,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  return 1;
}
