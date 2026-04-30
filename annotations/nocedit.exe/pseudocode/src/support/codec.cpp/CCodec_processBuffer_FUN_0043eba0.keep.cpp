// Name: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// Address: 0043eba0
// MANUAL RECONSTRUCTION
// Address Range: [[0043eba0, 0043ec24]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"
#include "stream_compat.h"

int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  watcom_buffer_istream iss(input, *input_length);
  return (*this_ptr->vtable->processToBuffer)(this_ptr, iss, input_length, output, output_length, enable_callback);
}
