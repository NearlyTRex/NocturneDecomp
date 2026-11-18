// Name: support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10
// Address: 0057df10
// Address Range: [[0057df10, 0057df6c]]
// Convention: __cdecl
// Signature: COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory *this_ptr,uint flags)

{
  COutStreamMemory *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_COutStreamMemoryTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = g_COutStreamMemoryVTable;
  support_trstream_cpp_COutStreamMemory_close_FUN_0057e0d0(this_ptr);
  ptr = (COutStreamMemory *)support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
