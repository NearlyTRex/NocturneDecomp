// Name: crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff
// Address: 0060d5ff
// Address Range: [[0060d5ff, 0060d64e]]
// Convention: __watcallStack
// Signature: streambuf * crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff(streambuf * this_ptr, void * buffer_start, int buffer_size)

#include "nocturne.h"

streambuf * __watcallStack
crt_iostream_cpp_streambuf_setbuf_FUN_0060d5ff
          (streambuf *this_ptr,void *buffer_start,int buffer_size)

{
  void *buffer_end;
  
  if (this_ptr->__reserve_base != (char *)0x0) {
    return (streambuf *)0x0;
  }
  if ((buffer_start == (void *)0x0) || (buffer_size < 1)) {
    buffer_end = (void *)0x0;
    buffer_start = (void *)0x0;
  }
  else {
    if (buffer_size < 5) {
      crt_iostream_cpp_setBuffer_FUN_0060d6a8(this_ptr,(void *)0x0,(void *)0x0,0);
      return (streambuf *)0x0;
    }
    buffer_end = (void *)((int)buffer_start + buffer_size);
  }
  crt_iostream_cpp_setBuffer_FUN_0060d6a8(this_ptr,buffer_start,buffer_end,0);
  return this_ptr;
}
