// Name: crt_fstream.cpp_filebuf_close_FUN_00608bcc
// Address: 00608bcc
// Address Range: [[00608bcc, 00608c14]]
// Convention: __watcallStack
// Signature: filebuf * crt_fstream.cpp_filebuf_close_FUN_00608bcc(filebuf * this_ptr)

#include "nocturne.h"

filebuf * __watcallStack crt_fstream_cpp_filebuf_close_FUN_00608bcc(filebuf *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->__file_handle != -1) {
    iVar1 = (*this_ptr->__vtable->sync)(&this_ptr->_streambuf);
    iVar2 = this_ptr->__file_handle;
    this_ptr->__file_handle = -1;
    this_ptr->__attached = this_ptr->__attached & 0xfe;
    iVar2 = crt_io_c_close_handle_safe_FUN_0060c2e0(iVar2);
    if ((iVar2 == 0) && (iVar1 != -1)) {
      return this_ptr;
    }
  }
  return (filebuf *)0x0;
}
