// Name: support_codec.cpp_CAsciiArmor_encode_FUN_004438d0
// Address: 004438d0
// Address Range: [[004438d0, 00443911]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiArmor_encode_FUN_004438d0(CAsciiArmor *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiArmor_encode_FUN_004438d0(CAsciiArmor *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  
  while( true ) {
    iVar1 = support_codec_cpp_readBitsFromStream_FUN_00442490(&this_ptr->bit_buffer,6,istream);
    if (iVar1 < 0) break;
    (**(code **)(*(int *)ostream + 4))(ostream,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  }
  return 1;
}
