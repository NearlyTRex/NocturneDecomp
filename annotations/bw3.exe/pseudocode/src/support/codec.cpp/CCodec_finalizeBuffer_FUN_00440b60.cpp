// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_00440b60
// Address: 00440b60
// Address Range: [[00440b60, 00440bc9]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_00440b60(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_00440b60(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;
  int iVar2;
  COutStreamMemory CStack_28;
  
  support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_00574ac0
            (&CStack_28,buffer_ptr,*buffer_size_ptr);
  iVar1 = (**(code **)((int)this_ptr->vtable + 0xc))(this_ptr,&CStack_28);
  iVar2 = support_trstream_cpp_COutStreamMemory_tell_FUN_00574d00(&CStack_28);
  *buffer_size_ptr = *buffer_size_ptr - iVar2;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&CStack_28,0);
  return (uint)(iVar1 == 1);
}
