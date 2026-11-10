// Name: support_codec.cpp_CCodec_processBuffer_FUN_00434070
// Address: 00434070
// Address Range: [[00434070, 004340e0]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00434070(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00434070(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;
  int iVar2;
  CInStreamMemory local_24;
  
  support_trstream_cpp_FUN_0057d520(&local_24,input,*input_length);
  iVar1 = (**(code **)((int)*this_ptr + 0x10))
                    (this_ptr,&local_24,output,output_length,enable_callback);
  iVar2 = support_trstream_cpp_FUN_0057d760(&local_24);
  *input_length = *input_length - iVar2;
  support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0(&local_24,0);
  return iVar1;
}
