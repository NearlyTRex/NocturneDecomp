// Name: support_codec.cpp_CCodec_processBuffer_FUN_00442d90
// Address: 00442d90
// Address Range: [[00442d90, 00442e00]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00442d90(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00442d90(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;
  int iVar2;
  CInStreamMemory local_24;
  
  support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_005a1160(&local_24,input,*input_length);
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x10))
                    (this_ptr,&local_24,output,output_length,enable_callback);
  iVar2 = support_trstream_cpp_CInStreamMemory_tell_FUN_005a13b0(&local_24);
  *input_length = *input_length - iVar2;
  support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0(&local_24,0);
  return iVar1;
}
