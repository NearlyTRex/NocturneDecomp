// Name: support_trstream.cpp_CInStreamFile_copy_FUN_00573a10
// Address: 00573a10
// Address Range: [[00573a10, 00573a23]]
// Convention: unknown
// Signature: CInStreamFile * support_trstream_cpp_CInStreamFile_copy_FUN_00573a10(CInStreamFile *this_ptr,CInStreamFile *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * support_trstream_cpp_CInStreamFile_copy_FUN_00573a10(CInStreamFile *this_ptr,CInStreamFile *other)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)support_trstream_cpp_FUN_00572530(this_ptr);
  pCVar1->vtable = &g_CInStreamFileVTable;
  return pCVar1;
}
