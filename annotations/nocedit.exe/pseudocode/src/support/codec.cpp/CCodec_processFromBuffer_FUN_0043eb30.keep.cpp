// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// Address: 0043eb30
// MANUAL RECONSTRUCTION
// Address Range: [[0043eb30, 0043eb9b]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream)

#include "nocturne.h"
#include "watcom/stream_compat.h"

int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream)

{
  watcom_buffer_istream iss(input, *input_length);
  return (*this_ptr->vtable->process)(this_ptr, iss, input_length, ostream);
}
