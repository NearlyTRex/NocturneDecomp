// Name: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// Address: 0043ea80
// Address Range: [[0043ea80, 0043eb20]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec * this_ptr, void * input_param, void * context_param, char * output_buffer, int * output_size, int enable_finalize)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80
          (CCodec *this_ptr,void *input_param,void *context_param,char *output_buffer,
          int *output_size,int enable_finalize)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000040;
  FILE FStack_44;
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384
            ((ostrstream *)&stack0xffffff70,0,output_buffer,*output_size,2);
  iVar1 = (*this_ptr->vtable->process)(this_ptr,(FILE *)context_param,(int)output_buffer,&FStack_44)
  ;
  if ((iVar1 != 0) && (in_stack_00000040 != 0)) {
    iVar1 = (*this_ptr->vtable->finalize)(this_ptr,(FILE *)&stack0xffffffe0);
  }
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d((ostrstream *)&stack0xfffffff4);
  *output_size = *output_size - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a((ostrstream *)&stack0xffffffb0,0);
  return iVar1;
}
