// Name: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// Address: 0043eba0
// Address Range: [[0043eba0, 0043ec24]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processBuffer_FUN_0043eba0(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processBuffer_FUN_0043eba0
          (CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length,
          int enable_callback)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  istrstream local_94;
  
  crt_strstream_cpp_istrstream_constructor_FUN_005ff524(&local_94,0,(char *)input,*input_length);
  iVar1 = (*this_ptr->vtable->processToBuffer)();
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(&local_94,0);
  return iVar1;
}
