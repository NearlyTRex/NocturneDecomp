// Name: crt_iostream.cpp_streambuf_setbuf_FUN_00571d4f
// Address: 00571d4f
// Address Range: [[00571d4f, 00571d9e]]
// Convention: __watcallStack
// Signature: streambuf * __watcallStack crt_iostream_cpp_streambuf_setbuf_FUN_00571d4f(streambuf *this_ptr,void *buffer_start,int buffer_size)

#include "nocturne.h"

streambuf * __watcallStack crt_iostream_cpp_streambuf_setbuf_FUN_00571d4f(streambuf *this_ptr,void *buffer_start,int buffer_size)

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
      crt_iostream_cpp_setBuffer_FUN_00571df8(this_ptr,(void *)0x0,(void *)0x0,0);
      return (streambuf *)0x0;
    }
    buffer_end = (void *)((int)buffer_start + buffer_size);
  }
  crt_iostream_cpp_setBuffer_FUN_00571df8(this_ptr,buffer_start,buffer_end,0);
  return this_ptr;
}
