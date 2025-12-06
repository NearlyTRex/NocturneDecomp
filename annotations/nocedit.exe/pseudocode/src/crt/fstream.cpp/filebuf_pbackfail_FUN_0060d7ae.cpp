// Name: crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae
// Address: 0060d7ae
// Address Range: [[0060d7ae, 0060d880]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae(filebuf * this_ptr, int character)

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_pbackfail_FUN_0060d7ae(filebuf *this_ptr,int character)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  long distance_to_move;
  bool bVar4;
  
  bVar4 = (this_ptr->streambuf).__reserve_base == (char *)0x0;
  if (bVar4) {
    if ((bVar4) && (((this_ptr->streambuf).__flags & 1) == 0)) {
      iVar2 = (*this_ptr->__vtable->doallocate)(&this_ptr->streambuf);
      if (iVar2 == -1) {
        return -1;
      }
    }
    pcVar1 = (this_ptr->streambuf).__reserve_base;
    if (pcVar1 == (char *)0x0) {
      (this_ptr->streambuf).__get_ptr = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->streambuf).__get_end = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->streambuf).__get_base = this_ptr->__unbuffered_get_area;
    }
    else {
      (this_ptr->streambuf).__get_base = pcVar1;
      (this_ptr->streambuf).__get_ptr = pcVar1 + 4;
      (this_ptr->streambuf).__get_end = pcVar1 + 4;
    }
    pcVar1 = (this_ptr->streambuf).__get_ptr;
    if (pcVar1 <= (this_ptr->streambuf).__get_base) {
      iVar2 = (*this_ptr->__vtable->pbackfail)(&this_ptr->streambuf,character & 0xff);
      return iVar2;
    }
    pcVar1 = pcVar1 + -1;
    (this_ptr->streambuf).__get_ptr = pcVar1;
    *pcVar1 = (char)character;
    uVar3 = (uint)(byte)*(this_ptr->streambuf).__get_ptr;
  }
  else {
    uVar3 = (*this_ptr->__vtable->sync)(&this_ptr->streambuf);
    if (uVar3 != 0xffffffff) {
      if ((character == 10) && ((this_ptr->__file_mode & 0x80) != 0)) {
        distance_to_move = -2;
      }
      else {
        distance_to_move = -1;
      }
      iVar2 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,distance_to_move,1);
      if (-1 < iVar2) {
        return character;
      }
      return -1;
    }
  }
  return uVar3;
}
