// Name: crt_iostream.cpp_doallocate_FUN_00571dc7
// Address: 00571dc7
// Address Range: [[00571dc7, 00571df7]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_iostream_cpp_doallocate_FUN_00571dc7(streambuf *this_ptr)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_doallocate_FUN_00571dc7(streambuf *this_ptr)

{
  void *new_buffer;
  
  new_buffer = FUN_00571ee0(0x204);
  if (new_buffer == (void *)0x0) {
    return -1;
  }
  crt_iostream_cpp_setBuffer_FUN_00571df8(this_ptr,new_buffer,(void *)((int)new_buffer + 0x204),1);
  return 0;
}
