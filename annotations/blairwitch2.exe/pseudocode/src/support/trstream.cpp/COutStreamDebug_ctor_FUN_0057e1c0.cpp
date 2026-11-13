// Name: support_trstream.cpp_COutStreamDebug_ctor_FUN_0057e1c0
// Address: 0057e1c0
// Address Range: [[0057e1c0, 0057e1d3]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_0057e1c0(COutStreamDebug *this_ptr)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_0057e1c0(COutStreamDebug *this_ptr)

{
  COutStreamDebug *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamDebug *)
           support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamDebugVTable;
  return pCVar1;
}
