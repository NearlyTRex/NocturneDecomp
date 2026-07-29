// Name: crt_fstream.cpp_filebuf_seekoff_FUN_00572338
// Address: 00572338
// Address Range: [[00572338, 005723ad]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_fstream_cpp_filebuf_seekoff_FUN_00572338(filebuf *this_ptr,long offset,int direction,int mode)

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_seekoff_FUN_00572338(filebuf *this_ptr,long offset,int direction,int mode)

{
  int iVar1;
  
  iVar1 = this_ptr->__file_handle;
  if (iVar1 != -1) {
    if ((((this_ptr->_streambuf).__put_ptr != (this_ptr->_streambuf).__put_base) ||
        ((this_ptr->_streambuf).__get_end != (this_ptr->_streambuf).__get_ptr)) &&
       (iVar1 = (*this_ptr->__vtable->sync)(&this_ptr->_streambuf), iVar1 == -1)) {
      return -1;
    }
    if (direction == 0) {
      iVar1 = 0;
    }
    else if ((uint)direction < 2) {
      iVar1 = 1;
    }
    else {
      if (direction != 2) {
        return -1;
      }
      iVar1 = 2;
    }
    iVar1 = lseek(this_ptr->__file_handle,offset,iVar1);
  }
  return iVar1;
}
