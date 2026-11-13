// Name: support_trstream.cpp_CInStreamMemory_copy_FUN_005741a0
// Address: 005741a0
// Address Range: [[005741a0, 005741b3]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_005741a0(CInStreamMemory *this_ptr,CInStreamMemory *other)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_005741a0(CInStreamMemory *this_ptr,CInStreamMemory *other)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_CInStream_ctor_FUN_00572530(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamMemoryVTable;
  return pCVar1;
}
