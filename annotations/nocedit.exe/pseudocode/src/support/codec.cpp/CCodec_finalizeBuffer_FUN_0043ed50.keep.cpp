// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// Address: 0043ed50
// MANUAL RECONSTRUCTION
// Address Range: [[0043ed50, 0043edc7]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

#include "nocturne.h"
#include "system/stream_compat.h"
#include <strstream>

int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;

  std::ostrstream oss(buffer_ptr, *buffer_size_ptr, std::ios::out | std::ios::binary);
  iVar1 = (*this_ptr->vtable->finalize)(this_ptr,watcom_ostream_from(oss));
  int written = oss.tellp();
  *buffer_size_ptr = *buffer_size_ptr - written;
  return iVar1;
}
