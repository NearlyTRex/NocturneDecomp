// Name: support_trstream.cpp_COutStreamMemory_copy_FUN_005a1b30
// Address: 005a1b30
// Address Range: [[005a1b30, 005a1b43]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_copy_FUN_005a1b30(COutStreamMemory *this_ptr,COutStreamMemory *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_copy_FUN_005a1b30(COutStreamMemory *this_ptr,COutStreamMemory *other)

{
  COutStreamMemory *pCVar1;
  
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_005a14b0(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamMemoryVTable;
  return pCVar1;
}
