// Name: support_codec.cpp_CCodec_processToBuffer_FUN_00433f60
// Address: 00433f60
// Address Range: [[00433f60, 00433fe1]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_00433f60(CCodec *this_ptr,void *istream,char *output_buffer,int *output_size,int enable_finalize)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_00433f60(CCodec *this_ptr,void *istream,char *output_buffer,int *output_size,int enable_finalize)

{
  int iVar1;
  int iVar2;
  COutStreamMemory CStack_24;
  
  support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_0057de80(&CStack_24,output_buffer,*output_size)
  ;
  iVar1 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,istream,&CStack_24);
  if (iVar1 == 1) {
    iVar1 = 1;
    if (enable_finalize == 0) goto LAB_00433fa2;
    iVar2 = (**(code **)((int)this_ptr->vtable + 0xc))(this_ptr,&CStack_24);
    iVar1 = 1;
    if (iVar2 == 1) goto LAB_00433fa2;
  }
  iVar1 = 0;
LAB_00433fa2:
  iVar2 = support_trstream_cpp_COutStreamMemory_tell_FUN_0057e0c0(&CStack_24);
  *output_size = *output_size - iVar2;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&CStack_24,0);
  return iVar1;
}
