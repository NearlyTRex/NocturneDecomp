// Name: crt_strstream.cpp_strstreambuf_init_FUN_0056fe65
// Address: 0056fe65
// Address Range: [[0056fe65, 0056ff29]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(strstreambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start)

#include "nocturne.h"

void __watcallStack crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(strstreambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr->__alloc_fn = (void *)0x0;
  this_ptr->__free_fn = (void *)0x0;
  this_ptr->__allocation_size = 0x20;
  bVar2 = *(byte *)&this_ptr[1]._streambuf.__b_lock;
  this_ptr->__minbuf_size = 0;
  this_ptr->__bit_flags = '\0';
  this_ptr->padding = '\0';
  *(byte *)&this_ptr[1]._streambuf.__b_lock = bVar2 & 0xf8;
  if (buffer_ptr == (char *)0x0) {
    *(byte *)&this_ptr[1]._streambuf.__b_lock = *(byte *)&this_ptr[1]._streambuf.__b_lock | 2;
    return;
  }
  if (buffer_size < 1) {
    if (buffer_size != 0) {
      pcVar6 = buffer_ptr + 0x200;
      *(byte *)&this_ptr[1]._streambuf.__b_lock = *(byte *)&this_ptr[1]._streambuf.__b_lock | 4;
      goto LAB_0056feab;
    }
    uVar4 = 0xffffffff;
    pcVar6 = buffer_ptr;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    buffer_size = ~uVar4 - 1;
  }
  pcVar6 = buffer_ptr + buffer_size;
LAB_0056feab:
  crt_iostream_cpp_setBuffer_FUN_00571df8(&this_ptr->_streambuf,buffer_ptr,pcVar6,0);
  if (((put_start == (char *)0x0) || (put_start < buffer_ptr)) ||
     ((pcVar3 = buffer_ptr, pcVar5 = pcVar6, pcVar6 <= put_start &&
      (((uint)this_ptr[1]._streambuf.__b_lock & 4) == 0)))) {
    put_start = (char *)0x0;
    pcVar3 = (char *)0x0;
    pcVar5 = (char *)0x0;
  }
  (this_ptr->_streambuf).__get_base = buffer_ptr;
  (this_ptr->_streambuf).__get_ptr = buffer_ptr;
  (this_ptr->_streambuf).__get_end = pcVar6;
  (this_ptr->_streambuf).__put_base = pcVar3;
  (this_ptr->_streambuf).__put_ptr = pcVar3;
  (this_ptr->_streambuf).__put_end = pcVar5;
  if (pcVar3 < put_start) {
    (this_ptr->_streambuf).__put_ptr =
         (this_ptr->_streambuf).__put_ptr + ((int)put_start - (int)pcVar3);
    return;
  }
  return;
}
