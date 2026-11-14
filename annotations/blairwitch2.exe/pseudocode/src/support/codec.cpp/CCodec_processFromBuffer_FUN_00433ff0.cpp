// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_00433ff0
// Address: 00433ff0
// Address Range: [[00433ff0, 00434060]]
// Convention: __cdecl
// Signature: bool __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_00433ff0(CCodec *this_ptr,char *input,int *input_length,COutStream *ostream)

#include "nocturne.h"

bool __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_00433ff0(CCodec *this_ptr,char *input,int *input_length,COutStream *ostream)

{
  int iVar1;
  int iVar2;
  CInStreamMemory local_24;
  
  support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_0057d520(&local_24,input,*input_length);
  iVar1 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,&local_24,ostream);
  iVar2 = support_trstream_cpp_CInStreamMemory_tell_FUN_0057d760(&local_24);
  *input_length = *input_length - iVar2;
  support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0(&local_24,0);
  return iVar1 == 1;
}
