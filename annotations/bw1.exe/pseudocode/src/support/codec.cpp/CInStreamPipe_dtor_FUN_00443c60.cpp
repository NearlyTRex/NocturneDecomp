// Name: support_codec.cpp_CInStreamPipe_dtor_FUN_00443c60
// Address: 00443c60
// Address Range: [[00443c60, 00443cbc]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)

{
  CInStreamPipe *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamPipeTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *(byte ***)this_ptr = &g_CInStreamPipeVTable;
  support_codec_cpp_FUN_00443f00(this_ptr);
  pCVar1 = (CInStreamPipe *)unkaddr_0059f520_cpp_FUN_0059f550(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
