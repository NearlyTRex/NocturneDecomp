// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// Address: 0043eb30
// Address Range: [[0043eb30, 0043eb9b]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length)

{
  int iVar1;
  byte local_90 [132];
  
  crt_strstream_cpp_istrstream_constructor_FUN_005ff524
            ((istrstream *)local_90,0,(char *)input,*input_length);
  iVar1 = (*this_ptr->vtable->process)
                    (this_ptr,(_FILE *)(local_90 + 0x48),(int)input_length,(_FILE *)output);
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca((istrstream *)local_90,0);
  return iVar1;
}
