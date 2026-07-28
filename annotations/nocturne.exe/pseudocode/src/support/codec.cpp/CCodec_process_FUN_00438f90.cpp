// Name: support_codec.cpp_CCodec_process_FUN_00438f90
// Address: 00438f90
// Address Range: [[00438f90, 00438ff5]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_CCodec_process_FUN_00438f90(undefined4 param_1,_istream *param_2,int *param_3,_ostream *param_4)

#include "nocturne.h"

uint support_codec_cpp_CCodec_process_FUN_00438f90(uint param_1,_istream *param_2,int *param_3,_ostream *param_4)

{
  uint uVar1;
  byte local_14 [4];
  
  do {
    if (*param_3 < 1) {
LAB_00438fac:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_00564c53(param_2,(char *)local_14);
      if (*(int *)((param_2->_ios).padding +
                  ((param_2->_istream_core).layout_info)->offset_to_base + -0x21) != 0)
      goto LAB_00438fac;
      *param_3 = *param_3 + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    crt_iostream_cpp_ostream_put_FUN_00564ce5(param_4,uVar1 & 0xff);
  } while( true );
}
