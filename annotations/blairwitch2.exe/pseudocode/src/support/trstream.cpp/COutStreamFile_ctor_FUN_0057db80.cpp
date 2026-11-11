// Name: support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80
// Address: 0057db80
// Address Range: [[0057db80, 0057db9a]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80(COutStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80(COutStreamFile *this_ptr)

{
  COutStreamFile *pCVar1;
  
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_0057d860(this_ptr);
  pCVar1->vtable = &g_COutStreamFileVTable;
  pCVar1->file = (_FILE *)0x0;
  return pCVar1;
}
