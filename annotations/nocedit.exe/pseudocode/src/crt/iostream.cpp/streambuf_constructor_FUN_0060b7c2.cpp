// Name: crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
// Address: 0060b7c2
// Address Range: [[0060b7c2, 0060b814]]
// Convention: __watcallStack
// Signature: streambuf * __watcallStack crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2(streambuf *this_ptr)

#include "nocturne.h"

streambuf * __watcallStack crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2(streambuf *this_ptr)

{
  this_ptr[1].__b_lock = &g_StreambufVTable;
  this_ptr->__b_lock = (void *)0x0;
  this_ptr->__reserve_base = (char *)0x0;
  this_ptr->__reserve_end = (char *)0x0;
  this_ptr->__get_base = (char *)0x0;
  this_ptr->__get_end = (char *)0x0;
  this_ptr->__get_ptr = (char *)0x0;
  this_ptr->__put_base = (char *)0x0;
  this_ptr->__put_end = (char *)0x0;
  this_ptr->__put_ptr = (char *)0x0;
  *(byte *)&this_ptr->__flags = (byte)this_ptr->__flags & 0xfc;
  return this_ptr;
}
