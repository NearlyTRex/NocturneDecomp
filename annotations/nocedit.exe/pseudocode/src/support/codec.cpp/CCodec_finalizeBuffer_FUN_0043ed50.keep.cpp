// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// Address: 0043ed50
// MANUAL RECONSTRUCTION
// Address Range: [[0043ed50, 0043edc7]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

#include "nocturne.h"
#include "watcom/stream_compat.h"

int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  watcom_buffer_ostream oss(buffer_ptr, buffer_size_ptr);
  return (*this_ptr->vtable->finalize)(this_ptr, oss);
}
