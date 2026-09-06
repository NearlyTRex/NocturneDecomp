// Name: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// Address: 0043ea80
// MANUAL RECONSTRUCTION
// Address Range: [[0043ea80, 0043eb20]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec *this_ptr,_istream *ifstream,int *byte_count,char *output_buffer,int *output_size,int enable_finalize)

#include "nocturne.h"
#include "watcom/stream_compat.h"

int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec *this_ptr,_istream *ifstream,int *byte_count,char *output_buffer,int *output_size,int enable_finalize)

{
  int iVar1;

  watcom_buffer_ostream oss(output_buffer, output_size);
  iVar1 = (*this_ptr->vtable->process)(this_ptr, ifstream, byte_count, oss);
  if ((iVar1 != 0) && (enable_finalize != 0)) {
    iVar1 = (*this_ptr->vtable->finalize)(this_ptr, oss);
  }
  return iVar1;
}
