// Name: crt_strstream.cpp_strstreambuf_dtor_FUN_005701cf
// Address: 005701cf
// Address Range: [[005701cf, 00570247]]
// Convention: __cdecl
// Signature: strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_dtor_FUN_005701cf(strstreambuf *this_ptr,uint flags)

#include "nocturne.h"

strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_dtor_FUN_005701cf(strstreambuf *this_ptr,uint flags)

{
  char *ptr;
  void *pvVar1;
  
  if ((flags & 4) == 0) {
    pvVar1 = this_ptr[1]._streambuf.__b_lock;
    this_ptr->__vtable = &g_StrstreambufVTable;
    if (((((uint)pvVar1 & 2) != 0) && (((uint)pvVar1 & 1) == 0)) &&
       (ptr = (this_ptr->_streambuf).__reserve_base, ptr != (char *)0x0)) {
      if (this_ptr->__free_fn == (void *)0x0) {
        shape_memdbg_cpp_free_FUN_00564486(ptr);
      }
      else {
        (*this_ptr->__free_fn)(ptr);
      }
    }
    this_ptr = (strstreambuf *)
               crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(&this_ptr->_streambuf);
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    pvVar1 = __vec_delete(this_ptr,&g_strstreambufTypeInfo_005a4af0);
    shape_memdbg_cpp_free_FUN_00564486(pvVar1);
  }
  return this_ptr;
}
