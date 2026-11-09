// Name: support_trstream.cpp_COutStreamFile_copy_FUN_0057dbe0
// Address: 0057dbe0
// Address Range: [[0057dbe0, 0057dbf3]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_0057dbe0(COutStreamFile *this_ptr,COutStreamFile *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_0057dbe0(COutStreamFile *this_ptr,COutStreamFile *other)

{
  COutStreamFile *pCVar1;
  
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_0057d860(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamFileVTable;
  return pCVar1;
}
