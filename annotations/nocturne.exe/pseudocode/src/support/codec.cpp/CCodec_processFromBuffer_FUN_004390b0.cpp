// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0
// Address: 004390b0
// Address Range: [[004390b0, 0043911b]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream)

{
  int iVar1;
  byte local_90 [72];
  byte local_48 [60];
  
  crt_strstream_cpp_istrstream_ctor_FUN_00564f32(local_90,0,input,*input_length);
  iVar1 = (*this_ptr->vtable->process)(this_ptr,local_48,input_length,ostream);
  crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(local_90,0);
  return iVar1;
}
