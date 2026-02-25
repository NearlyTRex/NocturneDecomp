// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// Address: 0043eb30
// Address Range: [[0043eb30, 0043eb9b]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length)

{
  int iVar1;
  _istrstream local_90;
  
  crt_strstream_cpp_istrstream_ctor_FUN_005ff524(&local_90,0,input,*input_length);
  iVar1 = (*this_ptr->vtable->process)
                    (this_ptr,&local_90._istream_core.__last_read_length,input_length,output);
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(&local_90,0);
  return iVar1;
}
