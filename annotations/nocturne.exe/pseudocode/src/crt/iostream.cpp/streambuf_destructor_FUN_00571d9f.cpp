// Name: crt_iostream.cpp_streambuf_destructor_FUN_00571d9f
// Address: 00571d9f
// Address Range: [[00571d9f, 00571dc6]]
// Convention: __watcallStack
// Signature: streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(streambuf *this_ptr)

#include "nocturne.h"

streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(streambuf *this_ptr)

{
  uint uVar1;
  
  uVar1 = this_ptr->__flags;
  this_ptr[1].__b_lock = &g_StreambufVTable;
  if ((uVar1 & 2) == 0) {
    return this_ptr;
  }
  freeBuffer(this_ptr->__reserve_base);
  return this_ptr;
}
