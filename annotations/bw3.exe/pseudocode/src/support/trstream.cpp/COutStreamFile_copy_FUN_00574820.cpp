// Name: support_trstream.cpp_COutStreamFile_copy_FUN_00574820
// Address: 00574820
// Address Range: [[00574820, 00574833]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_00574820(COutStreamFile *this_ptr,COutStreamFile *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_00574820(COutStreamFile *this_ptr,COutStreamFile *other)

{
  COutStreamFile *pCVar1;
  
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_005744a0(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamFileVTable;
  return pCVar1;
}
