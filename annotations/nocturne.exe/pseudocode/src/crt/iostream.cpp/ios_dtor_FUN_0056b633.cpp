// Name: crt_iostream.cpp_ios_dtor_FUN_0056b633
// Address: 0056b633
// Address Range: [[0056b633, 0056b67c]]
// Convention: __cdecl
// Signature: ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0056b633(ios *this_ptr,uint flags)

#include "nocturne.h"

ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0056b633(ios *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) == 0) {
    this_ptr->cleanup_vtable = &PTR_crt_iostream_cpp_ios_dtor_FUN_0056b633_005a4948;
    crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(this_ptr);
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    operator_delete(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_iosTypeInfo_005a49a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
