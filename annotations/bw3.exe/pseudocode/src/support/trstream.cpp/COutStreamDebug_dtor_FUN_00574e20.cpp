// Name: support_trstream.cpp_COutStreamDebug_dtor_FUN_00574e20
// Address: 00574e20
// Address Range: [[00574e20, 00574e73]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_00574e20(COutStreamDebug *this_ptr,uint flags)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_00574e20(COutStreamDebug *this_ptr,uint flags)

{
  COutStreamDebug *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamDebugTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamDebugVTable;
  pCVar1 = (COutStreamDebug *)support_trstream_cpp_COutStream_dtor_FUN_005744a0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
