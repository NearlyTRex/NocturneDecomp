// Name: support_codec.cpp_CAsciiUnarmor_decode_FUN_004439b0
// Address: 004439b0
// Address Range: [[004439b0, 004439f3]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_004439b0(CAsciiUnarmor *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_004439b0(CAsciiUnarmor *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  uint bit_value;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)istream + 4))(istream);
    if (iVar1 < 0) break;
    bit_value = support_codec_cpp_FUN_00443830(iVar1);
    if (-1 < (int)bit_value) {
      support_codec_cpp_writeBitsToStream_FUN_00442600(&this_ptr->bit_buffer,6,bit_value,ostream);
    }
  }
  return 1;
}
