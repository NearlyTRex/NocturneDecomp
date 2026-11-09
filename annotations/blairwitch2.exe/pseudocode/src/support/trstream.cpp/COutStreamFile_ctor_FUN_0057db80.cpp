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
  *(byte ***)pCVar1 = &g_COutStreamFileVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  return pCVar1;
}
