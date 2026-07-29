// Name: crt_strstream.cpp_strstreambuf_overflow_FUN_0057000d
// Address: 0057000d
// Address Range: [[0057000d, 00570074]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_strstream_cpp_strstreambuf_overflow_FUN_0057000d(strstreambuf *this_ptr,int character)

#include "nocturne.h"

int __watcallStack crt_strstream_cpp_strstreambuf_overflow_FUN_0057000d(strstreambuf *this_ptr,int character)

{
  char **ppcVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  
  pvVar4 = this_ptr[1]._streambuf.__b_lock;
  if (((uint)pvVar4 & 2) == 0) {
    return -1;
  }
  if (((uint)pvVar4 & 4) == 0) {
    iVar5 = (*this_ptr->__vtable->doallocate)(&this_ptr->_streambuf);
    if (iVar5 != -1) {
      if (character != -1) {
        *(this_ptr->_streambuf).__put_ptr = (char)character;
        ppcVar1 = &(this_ptr->_streambuf).__put_ptr;
        *ppcVar1 = *ppcVar1 + 1;
      }
      return 0;
    }
  }
  else {
    pcVar2 = (this_ptr->_streambuf).__put_ptr;
    pcVar3 = (this_ptr->_streambuf).__put_base;
    (this_ptr->_streambuf).__put_ptr = pcVar3;
    (this_ptr->_streambuf).__put_end = (this_ptr->_streambuf).__put_end + 0x200;
    iVar5 = 0;
    (this_ptr->_streambuf).__put_ptr =
         (this_ptr->_streambuf).__put_ptr + ((int)pcVar2 - (int)pcVar3);
  }
  return iVar5;
}
