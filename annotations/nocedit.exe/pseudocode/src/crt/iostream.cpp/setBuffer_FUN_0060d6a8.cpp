// Name: crt_iostream.cpp_setBuffer_FUN_0060d6a8
// Address: 0060d6a8
// Address Range: [[0060d6a8, 0060d724]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_iostream_cpp_setBuffer_FUN_0060d6a8(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag)

#include "nocturne.h"

void __watcallStack crt_iostream_cpp_setBuffer_FUN_0060d6a8(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag)

{
  uint *puVar1;
  byte bVar2;
  
  if ((this_ptr->__flags & 2) != 0) {
    crt_iostream_cpp_freeBuffer_FUN_0060d7a0(this_ptr->__reserve_base);
  }
  if ((new_buffer != (void *)0x0) && (new_buffer < buffer_end)) {
    this_ptr->__reserve_base = new_buffer;
    this_ptr->__reserve_end = buffer_end;
    puVar1 = &this_ptr->__flags;
    *(byte *)puVar1 = (byte)*puVar1 & 0xfd;
    *puVar1 = *puVar1 | (uint)(ownership_flag != 0) * 2;
    *(byte *)&this_ptr->__flags = (byte)this_ptr->__flags & 0xfe;
    return;
  }
  this_ptr->__reserve_base = (char *)0x0;
  bVar2 = (byte)this_ptr->__flags & 0xfc;
  *(byte *)&this_ptr->__flags = bVar2;
  this_ptr->__reserve_end = (char *)0x0;
  *(byte *)&this_ptr->__flags = bVar2 | 1;
  return;
}
