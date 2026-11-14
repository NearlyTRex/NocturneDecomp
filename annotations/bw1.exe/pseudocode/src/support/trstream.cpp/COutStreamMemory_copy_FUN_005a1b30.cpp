// Name: support_trstream.cpp_COutStreamMemory_copy_FUN_005a1b30
// Address: 005a1b30
// Address Range: [[005a1b30, 005a1b43]]
// Convention: __cdecl
// Signature: COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_005a1b30(COutStreamMemory *this_ptr,COutStreamMemory *other)

#include "nocturne.h"

COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_005a1b30(COutStreamMemory *this_ptr,COutStreamMemory *other)

{
  COutStreamMemory *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamMemory *)
           support_trstream_cpp_COutStream_dtor_FUN_005a14b0(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamMemoryVTable;
  return pCVar1;
}
