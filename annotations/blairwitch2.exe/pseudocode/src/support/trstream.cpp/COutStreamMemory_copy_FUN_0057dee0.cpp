// Name: support_trstream.cpp_COutStreamMemory_copy_FUN_0057dee0
// Address: 0057dee0
// Address Range: [[0057dee0, 0057def3]]
// Convention: __cdecl
// Signature: COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_0057dee0(COutStreamMemory *this_ptr,COutStreamMemory *other)

#include "nocturne.h"

COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_0057dee0(COutStreamMemory *this_ptr,COutStreamMemory *other)

{
  COutStreamMemory *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamMemory *)
           support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamMemoryVTable;
  return pCVar1;
}
