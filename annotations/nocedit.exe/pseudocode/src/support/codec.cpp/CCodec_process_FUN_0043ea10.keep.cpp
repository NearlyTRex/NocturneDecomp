// Name: support_codec.cpp_CCodec_process_FUN_0043ea10
// Address: 0043ea10
// MANUAL RECONSTRUCTION
// Address Range: [[0043ea10, 0043ea75]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_process_FUN_0043ea10(CCodec *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

#include "nocturne.h"
#include "core/stream_compat.h"

int __cdecl support_codec_cpp_CCodec_process_FUN_0043ea10(CCodec *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

{
  uint uVar1;
  byte local_14 [4];

  do {
    if (*byte_count < 1) {
LAB_0043ea2c:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_005ff245(istream,(char *)local_14);
      if (std_istream_from(istream).fail()) goto LAB_0043ea2c;
      *byte_count = *byte_count + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    crt_iostream_cpp_ostream_put_FUN_005ff2d7(ostream,uVar1 & 0xff);
  } while( true );
}
