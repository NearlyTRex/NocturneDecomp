// Name: support_trstream.cpp_CInStreamMemory_ctor_FUN_00574120
// Address: 00574120
// Address Range: [[00574120, 0057414f]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_ctor_FUN_00574120(CInStreamMemory *this_ptr)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_ctor_FUN_00574120(CInStreamMemory *this_ptr)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_CInStream_ctor_FUN_00572530(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamMemoryVTable;
  pCVar1->data = (char *)0x0;
  pCVar1->size = 0;
  pCVar1->position = 0;
  pCVar1->owns_data = 0;
  return pCVar1;
}
