// Name: support_trstream.cpp_CInStreamMemory_ctor_FUN_005a1130
// Address: 005a1130
// Address Range: [[005a1130, 005a115f]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_005a1130(CInStreamMemory *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_005a1130(CInStreamMemory *this_ptr)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)unkaddr_0059f520_cpp_FUN_0059f540(this_ptr);
  *(byte ***)pCVar1 = &g_CInStreamMemoryVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  return pCVar1;
}
