// Name: support_codec.cpp_CAsciiArmor_encode_FUN_004438d0
// Address: 004438d0
// Address Range: [[004438d0, 00443911]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CAsciiArmor_encode_FUN_004438d0(CAsciiArmor *this_ptr,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CAsciiArmor_encode_FUN_004438d0(CAsciiArmor *this_ptr,uint param_2,int *param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = support_codec_cpp_writeBitsToStream_FUN_00442490(&this_ptr->bit_buffer,6,param_2);
    if (iVar1 < 0) break;
    (**(code **)(*param_3 + 4))(param_3,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  }
  return 1;
}
