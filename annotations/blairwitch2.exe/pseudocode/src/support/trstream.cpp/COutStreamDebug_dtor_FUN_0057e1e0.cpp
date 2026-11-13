// Name: support_trstream.cpp_COutStreamDebug_dtor_FUN_0057e1e0
// Address: 0057e1e0
// Address Range: [[0057e1e0, 0057e233]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0(COutStreamDebug *this_ptr,uint flags)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0(COutStreamDebug *this_ptr,uint flags)

{
  COutStreamDebug *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamDebugTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamDebugVTable;
  pCVar1 = (COutStreamDebug *)support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
