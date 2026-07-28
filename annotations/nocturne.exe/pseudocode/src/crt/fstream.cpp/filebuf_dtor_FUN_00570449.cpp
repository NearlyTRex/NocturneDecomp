// Name: crt_fstream.cpp_filebuf_dtor_FUN_00570449
// Address: 00570449
// Address Range: [[00570449, 005704c0]]
// Convention: __watcallStack
// Signature: filebuf * __watcallStack crt_fstream_cpp_filebuf_dtor_FUN_00570449(filebuf *this_ptr,uint flags)

#include "nocturne.h"

filebuf * __watcallStack crt_fstream_cpp_filebuf_dtor_FUN_00570449(filebuf *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) == 0) {
    this_ptr->__vtable =
         (filebuf_vtable *)&PTR_crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82_005a4b0c;
    if (this_ptr->__file_handle != -1) {
      if ((this_ptr->_streambuf).__put_ptr != (this_ptr->_streambuf).__put_base) {
        crt_fstream_cpp_filebuf_sync_FUN_005723ae(this_ptr);
      }
      if ((this_ptr->__attached & 1U) == 0) {
        FUN_0056cd52(this_ptr);
      }
    }
    this_ptr = (filebuf *)crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(this_ptr,1);
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_filebufTypeInfo_005a4b60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
