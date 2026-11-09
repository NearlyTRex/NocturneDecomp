// Name: support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0
// Address: 005747c0
// Address Range: [[005747c0, 005747da]]
// Convention: unknown
// Signature: COutStreamFile * support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0(COutStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamFile * support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0(COutStreamFile *this_ptr)

{
  COutStreamFile *pCVar1;
  
  pCVar1 = (COutStreamFile *)support_trstream_cpp_FUN_005744a0(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamFileVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  return pCVar1;
}
