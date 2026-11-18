// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_00440970
// Address: 00440970
// Address Range: [[00440970, 004409e0]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_00440970(CCodec *this_ptr,char *input,int *input_length,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_00440970(CCodec *this_ptr,char *input,int *input_length,void *ostream)

{
  int iVar1;
  int iVar2;
  CInStreamMemory local_24;
  
  support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_00574150(&local_24,input,*input_length);
  iVar1 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,&local_24,ostream);
  iVar2 = support_trstream_cpp_CInStreamMemory_tell_FUN_005743a0(&local_24);
  *input_length = *input_length - iVar2;
  support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0(&local_24,0);
  return (uint)(iVar1 == 1);
}
