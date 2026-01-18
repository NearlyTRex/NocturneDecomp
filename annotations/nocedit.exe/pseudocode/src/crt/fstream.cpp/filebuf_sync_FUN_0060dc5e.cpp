// Name: crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
// Address: 0060dc5e
// Address Range: [[0060dc5e, 0060dcf4]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_sync_FUN_0060dc5e(filebuf * this_ptr)

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(filebuf *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  if ((this_ptr->_streambuf).__put_ptr == (this_ptr->_streambuf).__put_base) {
    pcVar1 = (this_ptr->_streambuf).__get_ptr;
    if ((this_ptr->_streambuf).__get_end != pcVar1) {
      if ((this_ptr->__file_mode & 0x80) == 0) {
        iVar2 = (int)pcVar1 - (int)(this_ptr->_streambuf).__get_end;
      }
      else {
        pcVar1 = (this_ptr->_streambuf).__get_end;
        iVar2 = 0;
        if (pcVar1 != (char *)0x0) {
          while (pcVar1 = pcVar1 + -1, (this_ptr->_streambuf).__get_ptr <= pcVar1) {
            iVar2 = iVar2 - ((*pcVar1 == '\n') + 1);
          }
        }
      }
      iVar2 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,iVar2,1);
      if (iVar2 < 0) {
        return -1;
      }
      (this_ptr->_streambuf).__get_base = (char *)0x0;
      (this_ptr->_streambuf).__get_ptr = (char *)0x0;
      (this_ptr->_streambuf).__get_end = (char *)0x0;
      return 0;
    }
  }
  else {
    iVar2 = (*this_ptr->__vtable->overflow)(&this_ptr->_streambuf,-1);
    if (iVar2 == -1) {
      return -1;
    }
  }
  return 0;
}
