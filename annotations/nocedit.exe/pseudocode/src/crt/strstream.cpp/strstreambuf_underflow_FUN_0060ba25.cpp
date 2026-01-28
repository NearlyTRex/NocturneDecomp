// Name: crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25
// Address: 0060ba25
// Address Range: [[0060ba25, 0060ba6f]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_strstream_cpp_strstreambuf_underflow_FUN_0060ba25(strstreambuf *this_ptr)

#include "nocturne.h"

int __watcallStack crt_strstream_cpp_strstreambuf_underflow_FUN_0060ba25(strstreambuf *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  
  if (((uint)this_ptr[1]._streambuf.__b_lock & 4) == 0) {
    pcVar1 = (this_ptr->_streambuf).__put_ptr;
    if (pcVar1 <= (this_ptr->_streambuf).__get_end) {
      return -1;
    }
    if ((this_ptr->_streambuf).__get_ptr == (char *)0x0) {
      pcVar2 = (this_ptr->_streambuf).__put_base;
      (this_ptr->_streambuf).__get_end = pcVar1;
      (this_ptr->_streambuf).__get_base = pcVar2;
      (this_ptr->_streambuf).__get_ptr = pcVar2;
    }
    else {
      (this_ptr->_streambuf).__get_end = pcVar1;
    }
  }
  else {
    (this_ptr->_streambuf).__get_end = (this_ptr->_streambuf).__get_end + 0x200;
  }
  return (uint)(byte)*(this_ptr->_streambuf).__get_ptr;
}
