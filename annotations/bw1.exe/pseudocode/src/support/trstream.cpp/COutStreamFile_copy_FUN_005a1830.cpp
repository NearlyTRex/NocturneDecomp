// Name: support_trstream.cpp_COutStreamFile_copy_FUN_005a1830
// Address: 005a1830
// Address Range: [[005a1830, 005a1843]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_005a1830(COutStreamFile *this_ptr,COutStreamFile *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_005a1830(COutStreamFile *this_ptr,COutStreamFile *other)

{
  COutStreamFile *pCVar1;
  
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_005a14b0(this_ptr);
  pCVar1->vtable = &g_COutStreamFileVTable;
  return pCVar1;
}
