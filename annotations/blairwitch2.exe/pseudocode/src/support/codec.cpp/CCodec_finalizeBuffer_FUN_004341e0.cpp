// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_004341e0
// Address: 004341e0
// Address Range: [[004341e0, 00434249]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_004341e0(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_004341e0(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;
  int iVar2;
  COutStreamMemory CStack_28;
  
  support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_0057de80
            (&CStack_28,buffer_ptr,*buffer_size_ptr);
  iVar1 = (**(code **)((int)this_ptr->vtable + 0xc))(this_ptr,&CStack_28);
  iVar2 = support_trstream_cpp_COutStreamMemory_tell_FUN_0057e0c0(&CStack_28);
  *buffer_size_ptr = *buffer_size_ptr - iVar2;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&CStack_28,0);
  return (uint)(iVar1 == 1);
}
