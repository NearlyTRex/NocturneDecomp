// Name: support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50
// Address: 00574b50
// Address Range: [[00574b50, 00574bac]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(COutStreamMemory *this_ptr,uint flags)

{
  COutStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamMemoryTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_COutStreamMemoryVTable;
  support_trstream_cpp_COutStreamMemory_close_FUN_00574d10(this_ptr);
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_005744a0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
