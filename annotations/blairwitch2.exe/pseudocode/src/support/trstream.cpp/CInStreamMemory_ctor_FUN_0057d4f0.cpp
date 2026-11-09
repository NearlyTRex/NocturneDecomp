// Name: support_trstream.cpp_CInStreamMemory_ctor_FUN_0057d4f0
// Address: 0057d4f0
// Address Range: [[0057d4f0, 0057d51f]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_0057d4f0(CInStreamMemory *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_0057d4f0(CInStreamMemory *this_ptr)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)unkaddr_0057b9a0_cpp_FUN_0057b9c0(this_ptr);
  *(byte ***)pCVar1 = &g_CInStreamMemoryVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  return pCVar1;
}
