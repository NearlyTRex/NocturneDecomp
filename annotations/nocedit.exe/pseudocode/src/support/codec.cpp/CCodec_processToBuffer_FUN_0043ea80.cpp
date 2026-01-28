// Name: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// Address: 0043ea80
// Address Range: [[0043ea80, 0043eb20]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80 (CCodec *this_ptr,void *input_param,void *context_param,char *output_buffer, int *output_size,int enable_finalize)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80
          (CCodec *this_ptr,void *input_param,void *context_param,char *output_buffer,
          int *output_size,int enable_finalize)

{
  int iVar1;
  int iVar2;
  int in_stack_00000028;
  void *pvStack_8c;
  byte local_48 [56];
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384
            ((ostrstream *)&stack0xffffff70,0,output_buffer,*output_size,2);
  iVar1 = (*this_ptr->vtable->process)(this_ptr,input_param,(int)context_param,(FILE *)local_48);
  if ((iVar1 != 0) && (in_stack_00000028 != 0)) {
    pvStack_8c = (void *)0x43eaed;
    iVar1 = (*this_ptr->vtable->finalize)(this_ptr,(FILE *)(local_48 + 0x10));
  }
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d((ostrstream *)(local_48 + 0x18));
  *output_size = *output_size - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a((ostrstream *)&stack0xffffff88,0);
  return iVar1;
}
