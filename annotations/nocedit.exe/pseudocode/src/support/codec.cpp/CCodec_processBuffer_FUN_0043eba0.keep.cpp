// Name: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// Address: 0043eba0
// MANUAL RECONSTRUCTION
// Address Range: [[0043eba0, 0043ec24]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"
#include "system/stream_compat.h"
#include <strstream>

int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;

  std::istrstream iss(input, *input_length);
  iVar1 = (*this_ptr->vtable->processToBuffer)
                    (this_ptr,watcom_istream_from(iss),input_length,output,
                     output_length,enable_callback);
  return iVar1;
}
