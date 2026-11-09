// Name: support_trstream.cpp_COutStreamMemory_copy_FUN_0057dee0
// Address: 0057dee0
// Address Range: [[0057dee0, 0057def3]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_copy_FUN_0057dee0(COutStreamMemory *this_ptr,COutStreamMemory *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_copy_FUN_0057dee0(COutStreamMemory *this_ptr,COutStreamMemory *other)

{
  COutStreamMemory *pCVar1;
  
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_0057d860(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamMemoryVTable;
  return pCVar1;
}
