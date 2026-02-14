// Name: crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70
// Address: 0060ba70
// Address Range: [[0060ba70, 0060ba7f]]
// Convention: __watcallStack
// Signature: strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_0060ba70(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size)

#include "nocturne.h"

strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_0060ba70(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size)

{
  if (0 < allocation_size) {
    this_ptr->__allocation_size = allocation_size;
  }
  return this_ptr;
}
