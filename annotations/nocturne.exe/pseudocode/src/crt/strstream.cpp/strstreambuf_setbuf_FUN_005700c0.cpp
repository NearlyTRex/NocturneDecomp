// Name: crt_strstream.cpp_strstreambuf_setbuf_FUN_005700c0
// Address: 005700c0
// Address Range: [[005700c0, 005700cf]]
// Convention: __watcallStack
// Signature: strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_005700c0(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size)

#include "nocturne.h"

strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_005700c0(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size)

{
  if (0 < allocation_size) {
    this_ptr->__allocation_size = allocation_size;
  }
  return this_ptr;
}
