// Name: crt_iostream.cpp_setBuffer_FUN_00571df8
// Address: 00571df8
// Address Range: [[00571df8, 00571e74]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_iostream_cpp_setBuffer_FUN_00571df8(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag)

#include "nocturne.h"

void __watcallStack crt_iostream_cpp_setBuffer_FUN_00571df8(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag)

{
  uint *puVar1;
  byte bVar2;
  
  if ((this_ptr->__flags & 2) != 0) {
    FUN_00571ef0(this_ptr->__reserve_base);
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
