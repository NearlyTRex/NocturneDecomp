// Name: support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60
// Address: 005a1b60
// Address Range: [[005a1b60, 005a1bbc]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory *this_ptr,uint flags)

{
  COutStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamMemoryTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_COutStreamMemoryVTable;
  support_trstream_cpp_COutStreamMemory_close_FUN_005a1d20(this_ptr);
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_005a14b0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
