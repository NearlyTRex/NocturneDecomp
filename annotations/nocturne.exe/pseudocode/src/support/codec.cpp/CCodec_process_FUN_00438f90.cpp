// Name: support_codec.cpp_CCodec_process_FUN_00438f90
// Address: 00438f90
// Address Range: [[00438f90, 00438ff5]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_process_FUN_00438f90(CCodec *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_process_FUN_00438f90(CCodec *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

{
  uint uVar1;
  byte local_14 [4];
  
  do {
    if (*byte_count < 1) {
LAB_00438fac:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_00564c53(istream,(char *)local_14);
      if (*(int *)((istream->_ios).padding +
                  ((istream->_istream_core).layout_info)->offset_to_base + -0x21) != 0)
      goto LAB_00438fac;
      *byte_count = *byte_count + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    crt_iostream_cpp_ostream_put_FUN_00564ce5(ostream,uVar1 & 0xff);
  } while( true );
}
