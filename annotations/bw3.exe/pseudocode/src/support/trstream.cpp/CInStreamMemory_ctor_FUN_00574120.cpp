// Name: support_trstream.cpp_CInStreamMemory_ctor_FUN_00574120
// Address: 00574120
// Address Range: [[00574120, 0057414f]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_00574120(CInStreamMemory *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_00574120(CInStreamMemory *this_ptr)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)unkafter_turret_cpp_FUN_00572530(this_ptr);
  *(byte ***)pCVar1 = &g_CInStreamMemoryVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  return pCVar1;
}
