// Name: support_trstream.cpp_COutStreamDebug_dtor_FUN_00574e20
// Address: 00574e20
// Address Range: [[00574e20, 00574e73]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_00574e20(COutStreamDebug *this_ptr,uint flags)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_00574e20(COutStreamDebug *this_ptr,uint flags)

{
  COutStreamDebug *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_COutStreamDebugTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = g_COutStreamDebugVTable;
  ptr = (COutStreamDebug *)support_trstream_cpp_COutStream_dtor_FUN_005744a0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
