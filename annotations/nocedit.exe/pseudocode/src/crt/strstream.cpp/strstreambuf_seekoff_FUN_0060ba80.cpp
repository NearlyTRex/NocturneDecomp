// Name: crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80
// Address: 0060ba80
// Address Range: [[0060ba80, 0060bb5e]]
// Convention: __watcallStack
// Signature: int crt_strstream.cpp_strstreambuf_seekoff_FUN_0060ba80(strstreambuf * this_ptr, int seek_distance, int seek_mode, int flags)

#include "nocturne.h"

int __watcallStack
crt_strstream_cpp_strstreambuf_seekoff_FUN_0060ba80
          (strstreambuf *this_ptr,int seek_distance,int seek_mode,int flags)

{
  int iVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  
  if (((flags & 3U) != 0) && ((seek_mode != 1 || ((flags & 3U) != 3)))) {
    if ((flags & 1U) != 0) {
      pcVar3 = (this_ptr->streambuf).__put_ptr;
      if ((pcVar3 == (char *)0x0) || (pcVar3 < (this_ptr->streambuf).__get_end)) {
        pcVar3 = (this_ptr->streambuf).__get_end;
      }
      in_ECX = crt_iostream_cpp_validateBufferSeek_FUN_0060d725
                         (seek_distance,seek_mode,(this_ptr->streambuf).__get_base,
                          (this_ptr->streambuf).__get_ptr,(this_ptr->streambuf).__get_end,pcVar3);
      if (in_ECX != -1) {
        pcVar3 = (this_ptr->streambuf).__get_end;
        pcVar2 = (this_ptr->streambuf).__get_base + in_ECX;
        if (pcVar3 < pcVar2) {
          pcVar3 = (this_ptr->streambuf).__put_end;
        }
        (this_ptr->streambuf).__get_ptr = pcVar2;
        (this_ptr->streambuf).__get_end = pcVar3;
      }
    }
    if (((flags & 2U) != 0) &&
       (pcVar3 = (this_ptr->streambuf).__put_end,
       in_ECX = crt_iostream_cpp_validateBufferSeek_FUN_0060d725
                          (seek_distance,seek_mode,(this_ptr->streambuf).__put_base,
                           (this_ptr->streambuf).__put_ptr,pcVar3,pcVar3), in_ECX != -1)) {
      (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_base;
      (this_ptr->streambuf).__put_end = (this_ptr->streambuf).__put_end;
      iVar1._0_2_ = this_ptr->__minbuf_size;
      iVar1._2_1_ = this_ptr->__bit_flags;
      iVar1._3_1_ = this_ptr->padding;
      (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_ptr + in_ECX;
      if (iVar1 < in_ECX) {
        this_ptr->__minbuf_size = (short)in_ECX;
        this_ptr->__bit_flags = (char)((uint)in_ECX >> 0x10);
        this_ptr->padding = (char)((uint)in_ECX >> 0x18);
      }
    }
    return in_ECX;
  }
  return -1;
}
