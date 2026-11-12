// Name: support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0
// Address: 005a11e0
// Address Range: [[005a11e0, 005a123c]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0(CInStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0(CInStreamMemory *this_ptr,uint flags)

{
  CInStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamMemoryTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CInStreamMemoryVTable;
  support_trstream_cpp_CInStreamMemory_close_FUN_005a1400(this_ptr);
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_FUN_0059f550(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
