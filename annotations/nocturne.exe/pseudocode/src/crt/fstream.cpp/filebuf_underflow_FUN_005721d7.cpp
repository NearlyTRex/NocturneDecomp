// Name: crt_fstream.cpp_filebuf_underflow_FUN_005721d7
// Address: 005721d7
// Address Range: [[005721d7, 005722db]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_005721d7(filebuf *this_ptr)

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_005721d7(filebuf *this_ptr)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  
  pcVar3 = (this_ptr->_streambuf).__put_ptr;
  pcVar2 = (this_ptr->_streambuf).__put_base;
  if ((pcVar3 != pcVar2 && -1 < (int)pcVar3 - (int)pcVar2) &&
     (iVar4 = (*this_ptr->__vtable->sync)(&this_ptr->_streambuf), iVar4 == -1)) {
    return -1;
  }
  (this_ptr->_streambuf).__put_base = (char *)0x0;
  (this_ptr->_streambuf).__put_ptr = (char *)0x0;
  pcVar3 = (this_ptr->_streambuf).__reserve_base;
  (this_ptr->_streambuf).__put_end = (char *)0x0;
  if (pcVar3 == (char *)0x0) {
    if ((((this_ptr->_streambuf).__flags & 1) == 0) &&
       (iVar4 = (*this_ptr->__vtable->doallocate)(&this_ptr->_streambuf), iVar4 == -1)) {
      return -1;
    }
    pcVar3 = (this_ptr->_streambuf).__reserve_base;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->_streambuf).__get_ptr = pcVar3;
      (this_ptr->_streambuf).__get_end = pcVar3;
      iVar4 = this_ptr->__file_handle;
      (this_ptr->_streambuf).__get_base = this_ptr->__unbuffered_get_area;
      iVar4 = ReadFileBytesMaybe(iVar4,pcVar3,1);
      if (iVar4 < 1) {
        return -1;
      }
      pbVar5 = (byte *)(this_ptr->_streambuf).__get_ptr;
      (this_ptr->_streambuf).__get_end = (this_ptr->_streambuf).__get_end + iVar4;
      goto LAB_00572243;
    }
LAB_00572211:
    (this_ptr->_streambuf).__get_base = pcVar3;
    (this_ptr->_streambuf).__get_ptr = pcVar3 + 4;
    (this_ptr->_streambuf).__get_end = pcVar3 + 4;
  }
  else if ((this_ptr->_streambuf).__get_end <= (this_ptr->_streambuf).__get_ptr) goto LAB_00572211;
  pcVar3 = (this_ptr->_streambuf).__get_end;
  iVar4 = (int)(this_ptr->_streambuf).__reserve_end - (int)pcVar3;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = ReadFileBytesMaybe(this_ptr->__file_handle,pcVar3,iVar4);
    if (iVar4 < 1) {
      return -1;
    }
  }
  pbVar1 = (byte *)((this_ptr->_streambuf).__get_end + iVar4);
  pbVar5 = (byte *)(this_ptr->_streambuf).__get_ptr;
  (this_ptr->_streambuf).__get_end = (char *)pbVar1;
  if (pbVar1 <= pbVar5) {
    return -1;
  }
LAB_00572243:
  return (uint)*pbVar5;
}
