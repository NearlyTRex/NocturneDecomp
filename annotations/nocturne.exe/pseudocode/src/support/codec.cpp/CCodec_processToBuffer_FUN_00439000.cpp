// Name: support_codec.cpp_CCodec_processToBuffer_FUN_00439000
// Address: 00439000
// Address Range: [[00439000, 004390a0]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_00439000(CCodec *this_ptr,_istream *ifstream,int *byte_count,char *output_buffer,int *output_size,int enable_finalize)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_00439000(CCodec *this_ptr,_istream *ifstream,int *byte_count,char *output_buffer,int *output_size,int enable_finalize)

{
  int iVar1;
  int iVar2;
  byte local_90 [72];
  byte local_48 [56];
  
  crt_strstream_cpp_ostrstream_ctor_FUN_00564d92(local_90,0,output_buffer,*output_size,2);
  iVar1 = (*this_ptr->vtable->process)(this_ptr,ifstream,byte_count,local_48);
  if ((iVar1 != 0) && (enable_finalize != 0)) {
    iVar1 = (*this_ptr->vtable->finalize)(this_ptr,local_48);
  }
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_00564e6b(local_48);
  *output_size = *output_size - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_00564e98(local_90,0);
  return iVar1;
}
