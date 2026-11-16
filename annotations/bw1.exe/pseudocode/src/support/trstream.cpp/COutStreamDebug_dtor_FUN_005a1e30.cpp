// Name: support_trstream.cpp_COutStreamDebug_dtor_FUN_005a1e30
// Address: 005a1e30
// Address Range: [[005a1e30, 005a1e83]]
// Convention: __cdecl
// Signature: COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_005a1e30(COutStreamDebug *this_ptr,uint flags)

#include "nocturne.h"

COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_005a1e30(COutStreamDebug *this_ptr,uint flags)

{
  COutStreamDebug *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_COutStreamDebugTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamDebugVTable;
  ptr = (COutStreamDebug *)support_trstream_cpp_COutStream_dtor_FUN_005a14b0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
