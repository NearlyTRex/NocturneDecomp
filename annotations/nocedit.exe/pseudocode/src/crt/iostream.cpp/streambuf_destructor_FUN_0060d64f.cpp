// Name: crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
// Address: 0060d64f
// Address Range: [[0060d64f, 0060d676]]
// Convention: __watcallStack
// Signature: streambuf * crt_iostream.cpp_streambuf_destructor_FUN_0060d64f(streambuf * this_ptr)

#include "nocturne.h"

streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(streambuf *this_ptr)

{
  uint uVar1;
  
  uVar1 = this_ptr->__flags;
  this_ptr[1].__b_lock = &g_StreambufVTable;
  if ((uVar1 & 2) == 0) {
    return this_ptr;
  }
  crt_iostream_cpp_freeBuffer_FUN_0060d7a0(this_ptr->__reserve_base);
  return this_ptr;
}
