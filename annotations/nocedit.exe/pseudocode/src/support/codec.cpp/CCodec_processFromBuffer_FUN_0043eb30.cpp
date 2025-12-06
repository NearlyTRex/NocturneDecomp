// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// Address: 0043eb30
// Address Range: [[0043eb30, 0043eb9b]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30
          (CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  FILE aFStack_44 [2];
  
  crt_strstream_cpp_istrstream_constructor_FUN_005ff524
            ((istrstream *)&stack0xffffff70,0,(char *)input,*input_length);
  iVar1 = (**(code **)(*(int *)input + 8))
                    ((CCodec *)input,aFStack_44,(int)input_length,(FILE *)output_length);
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca((istrstream *)&stack0xffffff98,0);
  return iVar1;
}
