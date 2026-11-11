// Name: unkclass_instream.cpp_CInStreamFile_copy_FUN_005a0a20
// Address: 005a0a20
// Address Range: [[005a0a20, 005a0a33]]
// Convention: unknown
// Signature: CInStreamFile * unkclass_instream_cpp_CInStreamFile_copy_FUN_005a0a20(CInStreamFile *this_ptr,CInStreamFile *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * unkclass_instream_cpp_CInStreamFile_copy_FUN_005a0a20(CInStreamFile *this_ptr,CInStreamFile *other)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)unkaddr_0059f520_cpp_FUN_0059f540(this_ptr);
  pCVar1->vtable = &g_CInStreamFileVTable;
  return pCVar1;
}
