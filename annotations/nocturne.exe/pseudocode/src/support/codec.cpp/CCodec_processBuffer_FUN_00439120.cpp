// Name: support_codec.cpp_CCodec_processBuffer_FUN_00439120
// Address: 00439120
// Address Range: [[00439120, 004391a4]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00439120(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00439120(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;
  byte local_94 [72];
  byte local_4c [60];
  
  crt_strstream_cpp_istrstream_ctor_FUN_00564f32(local_94,0,input,*input_length);
  iVar1 = (*this_ptr->vtable->processToBuffer)
                    (this_ptr,local_4c,input_length,output,output_length,enable_callback);
  crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(local_94,0);
  return iVar1;
}
