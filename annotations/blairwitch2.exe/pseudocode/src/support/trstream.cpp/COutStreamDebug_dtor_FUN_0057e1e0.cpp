// Name: support_trstream.cpp_COutStreamDebug_dtor_FUN_0057e1e0
// Address: 0057e1e0
// Address Range: [[0057e1e0, 0057e233]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0(COutStreamDebug *this_ptr,uint flags)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0(COutStreamDebug *this_ptr,uint flags)

{
  COutStreamDebug *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_COutStreamDebugTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamDebugVTable;
  ptr = (COutStreamDebug *)support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
