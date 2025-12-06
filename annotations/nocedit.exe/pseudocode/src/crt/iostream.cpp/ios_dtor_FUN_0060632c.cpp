// Name: crt_iostream.cpp_ios_dtor_FUN_0060632c
// Address: 0060632c
// Address Range: [[0060632c, 00606375]]
// Convention: __cdecl
// Signature: ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)

#include "nocturne.h"

ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0060632c(ios *this_ptr,uint d1,uint d2)

{
  void *ptr;
  
  if ((d1 & 4) == 0) {
    this_ptr->cleanup_vtable = &g_IOS_Destructor;
    crt_iostream_cpp_ios_freeBufferChain_FUN_0060bdc0(this_ptr);
    if ((d2 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IOSTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
