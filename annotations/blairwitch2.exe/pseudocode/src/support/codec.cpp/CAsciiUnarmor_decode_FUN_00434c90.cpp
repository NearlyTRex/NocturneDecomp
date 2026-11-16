// Name: support_codec.cpp_CAsciiUnarmor_decode_FUN_00434c90
// Address: 00434c90
// Address Range: [[00434c90, 00434cd3]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_00434c90(CAsciiUnarmor *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_00434c90(CAsciiUnarmor *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  uint bit_value;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)istream + 4))(istream);
    if (iVar1 < 0) break;
    bit_value = support_codec_cpp_FUN_00434b10(iVar1);
    if (-1 < (int)bit_value) {
      support_codec_cpp_writeBitsToStream_FUN_004338f0(&this_ptr->bit_buffer,6,bit_value,ostream);
    }
  }
  return 1;
}
