// Name: support_codec.cpp_CInStreamPipe_dtor_FUN_004418c0
// Address: 004418c0
// Address Range: [[004418c0, 0044191c]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0(CInStreamPipe *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0(CInStreamPipe *this_ptr,uint flags)

{
  CInStreamPipe *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamPipeTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CInStreamPipeVTable;
  support_codec_cpp_CInStreamPipe_close_FUN_00441b60(this_ptr);
  pCVar1 = (CInStreamPipe *)unkafter_turret_cpp_FUN_00572540(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
