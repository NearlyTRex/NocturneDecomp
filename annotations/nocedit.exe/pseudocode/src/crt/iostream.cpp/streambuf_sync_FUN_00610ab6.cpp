// Name: crt_iostream.cpp_streambuf_sync_FUN_00610ab6
// Address: 00610ab6
// Address Range: [[00610ab6, 00610ad6]]
// Convention: __watcallStack
// Signature: int crt_iostream.cpp_streambuf_sync_FUN_00610ab6(streambuf * streambuf_ptr)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_00610ab6(streambuf *streambuf_ptr)

{
  if ((streambuf_ptr->__get_end <= streambuf_ptr->__get_ptr) &&
     (streambuf_ptr->__put_ptr <= streambuf_ptr->__put_base)) {
    return 0;
  }
  return -1;
}
