// Name: crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a
// Address: 0056ff2a
// Address Range: [[0056ff2a, 0056ff81]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_iostream_cpp_streambuf_initBuffer_FUN_0056ff2a(streambuf *this_ptr,char *buffer_ptr)

#include "nocturne.h"

void __watcallStack crt_iostream_cpp_streambuf_initBuffer_FUN_0056ff2a(streambuf *this_ptr,char *buffer_ptr)

{
  this_ptr->__b_lock = (void *)0x0;
  this_ptr->__get_end = (char *)0x0;
  this_ptr->__get_base = (char *)0x0;
  this_ptr->__get_ptr = (char *)0x0;
  this_ptr->__put_base = (char *)0x6;
  this_ptr->__put_end = (char *)0x0;
  *(byte *)&this_ptr->__flags = 0x20;
  this_ptr->__reserve_end = (char *)0x0;
  this_ptr->__put_ptr = (char *)0x0;
  if (buffer_ptr == (char *)0x0) {
    this_ptr->__get_end = (char *)0x1;
  }
  this_ptr->__reserve_base = buffer_ptr;
  return;
}
