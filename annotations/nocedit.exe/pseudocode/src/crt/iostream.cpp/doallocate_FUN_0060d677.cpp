// Name: crt_iostream.cpp_doallocate_FUN_0060d677
// Address: 0060d677
// Address Range: [[0060d677, 0060d6a7]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_iostream_cpp_doallocate_FUN_0060d677(streambuf *this_ptr)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_doallocate_FUN_0060d677(streambuf *this_ptr)

{
  void *new_buffer;
  
  new_buffer = crt_iostream_cpp_streambuf_allocBuffer_FUN_0060d790(0x204);
  if (new_buffer == (void *)0x0) {
    return -1;
  }
  crt_iostream_cpp_setBuffer_FUN_0060d6a8(this_ptr,new_buffer,(void *)((int)new_buffer + 0x204),1);
  return 0;
}
