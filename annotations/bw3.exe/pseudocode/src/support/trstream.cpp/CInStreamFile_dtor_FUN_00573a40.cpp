// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
// Address: 00573a40
// Address Range: [[00573a40, 00573a9c]]
// Convention: unknown
// Signature: CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_00573db0(this_ptr);
  pCVar1 = (CInStreamFile *)support_trstream_cpp_FUN_00572540(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
