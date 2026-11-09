// Name: support_trstream.cpp_COutStreamMemory_ctor_FUN_005a1a90
// Address: 005a1a90
// Address Range: [[005a1a90, 005a1ac6]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_ctor_FUN_005a1a90(COutStreamMemory *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_ctor_FUN_005a1a90(COutStreamMemory *this_ptr)

{
  COutStreamMemory *pCVar1;
  
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_005a14b0(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamMemoryVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  *(uint *)&pCVar1->field_0x14 = 1;
  return pCVar1;
}
