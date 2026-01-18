// Name: crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
// Address: 0060bdf9
// Address Range: [[0060bdf9, 0060be70]]
// Convention: __watcallStack
// Signature: filebuf * crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9(filebuf * this_ptr, uint d1, uint d2, uint d3)

#include "nocturne.h"

filebuf * __watcallStack
crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9(filebuf *this_ptr,uint d1,uint d2,uint d3)

{
  void *ptr;
  
  if ((d1 & 4) == 0) {
    this_ptr->__vtable = &g_FilebufVTable;
    if (this_ptr->__file_handle != -1) {
      if ((this_ptr->_streambuf).__put_ptr != (this_ptr->_streambuf).__put_base) {
        crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(this_ptr);
      }
      if ((this_ptr->__attached & 1U) == 0) {
        crt_fstream_cpp_filebuf_close_FUN_00608bcc(this_ptr);
      }
    }
    this_ptr = (filebuf *)crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(&this_ptr->_streambuf);
    if ((d1 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_FilebufTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
