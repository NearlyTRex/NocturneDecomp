// Name: support_codec.cpp_CAsciiArmor_encode_FUN_00441530
// Address: 00441530
// Address Range: [[00441530, 00441571]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiArmor_encode_FUN_00441530(CAsciiArmor *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiArmor_encode_FUN_00441530(CAsciiArmor *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  
  while( true ) {
    iVar1 = support_codec_cpp_readBitsFromStream_FUN_004400f0(&this_ptr->bit_buffer,6,istream);
    if (iVar1 < 0) break;
    (**(code **)(*(int *)ostream + 4))(ostream,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  }
  return 1;
}
