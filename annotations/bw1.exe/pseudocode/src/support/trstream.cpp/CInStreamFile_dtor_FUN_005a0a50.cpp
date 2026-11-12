// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
// Address: 005a0a50
// Address Range: [[005a0a50, 005a0aac]]
// Convention: unknown
// Signature: CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(this_ptr);
  pCVar1 = (CInStreamFile *)support_trstream_cpp_FUN_0059f550(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
