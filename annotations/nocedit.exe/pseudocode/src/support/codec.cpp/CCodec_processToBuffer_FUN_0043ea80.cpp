// Name: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// Address: 0043ea80
// Address Range: [[0043ea80, 0043eb20]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec *this_ptr,_istream *ifstream,int byte_count,char *output_buffer,int *output_size,int enable_finalize)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec *this_ptr,_istream *ifstream,int byte_count,char *output_buffer,int *output_size,int enable_finalize)

{
  int iVar1;
  int iVar2;
  _ostrstream local_90;
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(&local_90,0,output_buffer,*output_size,2);
  iVar1 = (*this_ptr->vtable->process)
                    (this_ptr,ifstream,(int *)byte_count,&local_90._ostream_core.destructor_vtable);
  if ((iVar1 != 0) && (enable_finalize != 0)) {
    iVar1 = (*this_ptr->vtable->finalize)(this_ptr,&local_90._ostream_core.destructor_vtable);
  }
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(&local_90._ostream_core.destructor_vtable)
  ;
  *output_size = *output_size - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(&local_90,0);
  return iVar1;
}
