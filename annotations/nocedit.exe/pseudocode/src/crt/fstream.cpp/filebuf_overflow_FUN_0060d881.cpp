// Name: crt_fstream.cpp_filebuf_overflow_FUN_0060d881
// Address: 0060d881
// Address Range: [[0060d881, 0060da86]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_fstream_cpp_filebuf_overflow_FUN_0060d881(filebuf *this_ptr,int character)

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_overflow_FUN_0060d881(filebuf *this_ptr,int character)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint n;
  SIZE_T count;
  long unaff_EDI;
  char local_14 [4];
  
  pcVar4 = (this_ptr->_streambuf).__get_end;
  pcVar2 = (this_ptr->_streambuf).__get_ptr;
  if (pcVar4 == pcVar2 || (int)pcVar4 - (int)pcVar2 < 0) {
    (this_ptr->_streambuf).__get_base = (char *)0x0;
    (this_ptr->_streambuf).__get_ptr = (char *)0x0;
    (this_ptr->_streambuf).__get_end = (char *)0x0;
  }
  else {
    iVar3 = (*this_ptr->__vtable->sync)(&this_ptr->_streambuf);
    if (iVar3 == -1) {
      return -1;
    }
  }
  pcVar4 = (this_ptr->_streambuf).__reserve_base;
  if (pcVar4 == (char *)0x0) {
    if ((((this_ptr->_streambuf).__flags & 1) == 0) &&
       (iVar3 = (*this_ptr->__vtable->doallocate)(&this_ptr->_streambuf), iVar3 == -1)) {
      return -1;
    }
    pcVar4 = (this_ptr->_streambuf).__reserve_base;
    if (pcVar4 == (char *)0x0) {
      if (character != -1) {
        local_14[0] = (char)character;
        iVar3 = write(this_ptr->__file_handle,local_14,1);
        return (iVar3 == 1) - 1;
      }
      return 0;
    }
  }
  else if ((this_ptr->_streambuf).__put_base < (this_ptr->_streambuf).__put_ptr) goto LAB_0060d930;
  (this_ptr->_streambuf).__put_base = pcVar4;
  (this_ptr->_streambuf).__put_ptr = pcVar4;
  (this_ptr->_streambuf).__put_end = (this_ptr->_streambuf).__reserve_end;
LAB_0060d930:
  if (((this_ptr->__file_mode & 8) == 0) ||
     ((unaff_EDI = tell(this_ptr->__file_handle), -1 < unaff_EDI &&
      (iVar3 = lseek(this_ptr->__file_handle,0,2), -1 < iVar3)))) {
    if ((character != -1) &&
       (pcVar4 = (this_ptr->_streambuf).__put_ptr, pcVar4 < (this_ptr->_streambuf).__put_end)) {
      *pcVar4 = (char)character;
      character = -1;
      (this_ptr->_streambuf).__put_ptr = (this_ptr->_streambuf).__put_ptr + 1;
    }
    n = (int)(this_ptr->_streambuf).__put_ptr - (int)(this_ptr->_streambuf).__put_base;
    while (n != 0) {
      count = n;
      if (0x7fffffff < n) {
        count = 0x7fffffff;
      }
      iVar3 = write
                        (this_ptr->__file_handle,(this_ptr->_streambuf).__put_base,count);
      if (iVar3 == -1) {
        return -1;
      }
      if (iVar3 == 0) break;
      n = n - iVar3;
      if (n == 0) {
        (this_ptr->_streambuf).__put_ptr = (this_ptr->_streambuf).__put_base;
        (this_ptr->_streambuf).__put_end = (this_ptr->_streambuf).__put_end;
      }
      else {
        pcVar4 = (this_ptr->_streambuf).__put_base;
        memmove(pcVar4,pcVar4 + iVar3,n);
        (this_ptr->_streambuf).__put_ptr = (this_ptr->_streambuf).__put_base;
        (this_ptr->_streambuf).__put_end = (this_ptr->_streambuf).__put_end;
        (this_ptr->_streambuf).__put_ptr = (this_ptr->_streambuf).__put_ptr + n;
      }
    }
    if (character != -1) {
      pcVar4 = (this_ptr->_streambuf).__put_ptr;
      if ((this_ptr->_streambuf).__put_end <= pcVar4) {
        return -1;
      }
      *pcVar4 = (char)character;
      ppcVar1 = &(this_ptr->_streambuf).__put_ptr;
      *ppcVar1 = *ppcVar1 + 1;
    }
    if ((((this_ptr->__file_mode & 8) == 0) ||
        (iVar3 = lseek(this_ptr->__file_handle,unaff_EDI,0), -1 < iVar3))
       && (n == 0)) {
      return 0;
    }
  }
  return -1;
}
