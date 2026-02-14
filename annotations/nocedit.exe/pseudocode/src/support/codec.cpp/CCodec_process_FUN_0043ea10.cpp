// Name: support_codec.cpp_CCodec_process_FUN_0043ea10
// Address: 0043ea10
// Address Range: [[0043ea10, 0043ea75]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_process_FUN_0043ea10(CCodec *this_ptr,_FILE *input_file,int byte_count,_FILE *output_file)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_process_FUN_0043ea10(CCodec *this_ptr,_FILE *input_file,int byte_count,_FILE *output_file)

{
  uint uVar1;
  byte local_14 [4];
  
  do {
    if (*(int *)byte_count < 1) {
LAB_0043ea2c:
      uVar1 = 0xffffffff;
    }
    else {
      crt_iostream_cpp_istream_get_FUN_005ff245((istream *)input_file,(char *)local_14);
      if (*(int *)((int)&input_file->_handle + *(int *)(input_file->_ptr + 4)) != 0)
      goto LAB_0043ea2c;
      *(int *)byte_count = *(int *)byte_count + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    crt_iostream_cpp_ostream_put_FUN_005ff2d7((ostream *)output_file,uVar1 & 0xff);
  } while( true );
}
