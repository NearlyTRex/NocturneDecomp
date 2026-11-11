// Name: support_trstream.cpp_COutStreamMemory_copy_FUN_00574b20
// Address: 00574b20
// Address Range: [[00574b20, 00574b33]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_copy_FUN_00574b20(COutStreamMemory *this_ptr,COutStreamMemory *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_copy_FUN_00574b20(COutStreamMemory *this_ptr,COutStreamMemory *other)

{
  COutStreamMemory *pCVar1;
  
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_005744a0(this_ptr);
  pCVar1->vtable = &g_COutStreamMemoryVTable;
  return pCVar1;
}
