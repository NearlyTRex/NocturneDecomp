// Name: support_trstream.cpp_COutStreamMemory_ctor_FUN_0057de40
// Address: 0057de40
// Address Range: [[0057de40, 0057de76]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_ctor_FUN_0057de40(COutStreamMemory *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_ctor_FUN_0057de40(COutStreamMemory *this_ptr)

{
  COutStreamMemory *pCVar1;
  
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_0057d860(this_ptr);
  *(byte ***)pCVar1 = &g_COutStreamMemoryVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  *(uint *)&pCVar1->field_0x14 = 1;
  return pCVar1;
}
