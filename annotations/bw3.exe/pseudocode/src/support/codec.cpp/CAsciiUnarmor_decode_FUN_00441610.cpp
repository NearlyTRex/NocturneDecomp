// Name: support_codec.cpp_CAsciiUnarmor_decode_FUN_00441610
// Address: 00441610
// Address Range: [[00441610, 00441653]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_00441610(CAsciiUnarmor *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_00441610(CAsciiUnarmor *this_ptr,void *istream,void *ostream)

{
  int ch;
  uint bit_value;
  
  while( true ) {
    ch = (**(code **)(*(int *)istream + 4))(istream);
    if (ch < 0) break;
    bit_value = support_codec_cpp_decodeArmorChar_FUN_00441490(ch);
    if (-1 < (int)bit_value) {
      support_codec_cpp_writeBitsToStream_FUN_00440260(&this_ptr->bit_buffer,6,bit_value,ostream);
    }
  }
  return 1;
}
