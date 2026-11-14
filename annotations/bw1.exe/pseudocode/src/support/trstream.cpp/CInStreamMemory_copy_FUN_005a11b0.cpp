// Name: support_trstream.cpp_CInStreamMemory_copy_FUN_005a11b0
// Address: 005a11b0
// Address Range: [[005a11b0, 005a11c3]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_005a11b0(CInStreamMemory *this_ptr,CInStreamMemory *other)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_005a11b0(CInStreamMemory *this_ptr,CInStreamMemory *other)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_CInStream_ctor_FUN_0059f540(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamMemoryVTable;
  return pCVar1;
}
