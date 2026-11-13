// Name: support_trstream.cpp_CInStreamMemory_copy_FUN_0057d570
// Address: 0057d570
// Address Range: [[0057d570, 0057d583]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_0057d570(CInStreamMemory *this_ptr,CInStreamMemory *other)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_0057d570(CInStreamMemory *this_ptr,CInStreamMemory *other)

{
  CInStreamMemory *pCVar1;
  
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_CInStream_ctor_FUN_0057b9c0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamMemoryVTable;
  return pCVar1;
}
