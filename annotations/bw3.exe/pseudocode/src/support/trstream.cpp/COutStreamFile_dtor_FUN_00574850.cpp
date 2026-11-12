// Name: support_trstream.cpp_COutStreamFile_dtor_FUN_00574850
// Address: 00574850
// Address Range: [[00574850, 005748ac]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile *this_ptr,uint flags)

{
  COutStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamFileTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_COutStreamFileVTable;
  support_trstream_cpp_COutStreamFile_close_FUN_005749a0(this_ptr);
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_005744a0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
