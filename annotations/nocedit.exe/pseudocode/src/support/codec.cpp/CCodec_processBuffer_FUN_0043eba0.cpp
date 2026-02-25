// Name: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// Address: 0043eba0
// Address Range: [[0043eba0, 0043ec24]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;
  _istrstream local_94;
  
  crt_strstream_cpp_istrstream_ctor_FUN_005ff524(&local_94,0,input,*input_length);
  iVar1 = (*this_ptr->vtable->processToBuffer)
                    (this_ptr,&local_94._istream_core.__last_read_length,input_length,output,
                     output_length,enable_callback);
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(&local_94,0);
  return iVar1;
}
