// Name: support_trstream.cpp_COutStreamDebug_ctor_FUN_00574e00
// Address: 00574e00
// Address Range: [[00574e00, 00574e13]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_00574e00(COutStreamDebug *this_ptr)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_00574e00(COutStreamDebug *this_ptr)

{
  COutStreamDebug *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamDebug *)
           support_trstream_cpp_COutStream_dtor_FUN_005744a0(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamDebugVTable;
  return pCVar1;
}
