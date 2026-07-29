// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_004392d0
// Address: 004392d0
// Address Range: [[004392d0, 00439347]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_004392d0(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_004392d0(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;
  int iVar2;
  byte local_8c [72];
  byte local_44 [56];
  
  crt_strstream_cpp_ostrstream_ctor_FUN_00564d92(local_8c,0,buffer_ptr,*buffer_size_ptr,2);
  iVar1 = (*this_ptr->vtable->finalize)(this_ptr,local_44);
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_00564e6b(local_44);
  *buffer_size_ptr = *buffer_size_ptr - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_00564e98(local_8c,0);
  return iVar1;
}
