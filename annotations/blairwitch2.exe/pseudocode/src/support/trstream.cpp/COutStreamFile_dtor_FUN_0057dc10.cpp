// Name: support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10
// Address: 0057dc10
// Address Range: [[0057dc10, 0057dc6c]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)

{
  COutStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamFileTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_COutStreamFileVTable;
  support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(this_ptr);
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_0057d860(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
