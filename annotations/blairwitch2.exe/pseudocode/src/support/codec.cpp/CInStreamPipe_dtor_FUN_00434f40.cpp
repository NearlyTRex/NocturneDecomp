// Name: support_codec.cpp_CInStreamPipe_dtor_FUN_00434f40
// Address: 00434f40
// Address Range: [[00434f40, 00434f9c]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_00434f40(CInStreamPipe *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_00434f40(CInStreamPipe *this_ptr,uint flags)

{
  CInStreamPipe *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamPipeTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CInStreamPipeVTable;
  support_codec_cpp_CInStreamPipe_close_FUN_004351e0(this_ptr);
  pCVar1 = (CInStreamPipe *)unkaddr_0057b9a0_cpp_FUN_0057b9d0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
