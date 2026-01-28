// Name: crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c
// Address: 0060db8c
// Address Range: [[0060db8c, 0060dbe7]]
// Convention: __watcallStack
// Signature: streambuf * __watcallStack crt_fstream_cpp_filebuf_setbuf_FUN_0060db8c(filebuf *this_ptr,char *buffer_ptr,int buffer_size)

#include "nocturne.h"

streambuf * __watcallStack
crt_fstream_cpp_filebuf_setbuf_FUN_0060db8c(filebuf *this_ptr,char *buffer_ptr,int buffer_size)

{
  char *buffer_end;
  
  if ((this_ptr->__file_handle != -1) && ((this_ptr->_streambuf).__reserve_base != (char *)0x0)) {
    return (streambuf *)0x0;
  }
  if ((buffer_ptr == (char *)0x0) || (buffer_size < 1)) {
    buffer_end = (char *)0x0;
    buffer_ptr = (char *)0x0;
  }
  else {
    if (buffer_size < 5) {
      crt_iostream_cpp_setBuffer_FUN_0060d6a8(&this_ptr->_streambuf,(void *)0x0,(void *)0x0,0);
      return (streambuf *)0x0;
    }
    buffer_end = buffer_ptr + buffer_size;
  }
  crt_iostream_cpp_setBuffer_FUN_0060d6a8(&this_ptr->_streambuf,buffer_ptr,buffer_end,0);
  return &this_ptr->_streambuf;
}
