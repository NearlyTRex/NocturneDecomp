// Name: crt_iostream.cpp_ios_dtor_FUN_0060632c
// Address: 0060632c
// Address Range: [[0060632c, 00606375]]
// Convention: __cdecl
// Signature: ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0060632c(ios *this_ptr,uint flags)

#include "nocturne.h"

ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0060632c(ios *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) == 0) {
    this_ptr->cleanup_vtable = &g_IOS_Destructor;
    crt_iostream_cpp_ios_freeBufferChain_FUN_0060bdc0(this_ptr);
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_IOSTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
