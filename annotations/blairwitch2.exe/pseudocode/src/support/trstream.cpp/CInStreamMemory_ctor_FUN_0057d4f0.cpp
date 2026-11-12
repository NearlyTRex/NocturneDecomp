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
  
  pCVar1 = (CInStreamMemory *)core_terrain_cpp_FUN_0057b9c0(this_ptr);
  pCVar1->vtable = &g_CInStreamMemoryVTable;
  pCVar1->data = (char *)0x0;
  pCVar1->size = 0;
  pCVar1->position = 0;
  pCVar1->owns_data = 0;
  return pCVar1;
}
