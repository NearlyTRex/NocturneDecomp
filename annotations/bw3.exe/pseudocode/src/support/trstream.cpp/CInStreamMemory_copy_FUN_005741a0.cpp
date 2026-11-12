// Name: support_trstream.cpp_CInStreamMemory_copy_FUN_005741a0
// Address: 005741a0
// Address Range: [[005741a0, 005741b3]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_copy_FUN_005741a0(CInStreamMemory *this_ptr,CInStreamMemory *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_copy_FUN_005741a0(CInStreamMemory *this_ptr,CInStreamMemory *other)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_FUN_00572530(this_ptr);
  pCVar1->vtable = &g_CInStreamMemoryVTable;
  return pCVar1;
}
