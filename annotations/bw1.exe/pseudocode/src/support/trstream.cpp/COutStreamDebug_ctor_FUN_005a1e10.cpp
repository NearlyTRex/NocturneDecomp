// Name: support_trstream.cpp_COutStreamDebug_ctor_FUN_005a1e10
// Address: 005a1e10
// Address Range: [[005a1e10, 005a1e23]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_005a1e10(COutStreamDebug *this_ptr)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_005a1e10(COutStreamDebug *this_ptr)

{
  COutStreamDebug *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamDebug *)
           support_trstream_cpp_COutStream_dtor_FUN_005a14b0(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamDebugVTable;
  return pCVar1;
}
