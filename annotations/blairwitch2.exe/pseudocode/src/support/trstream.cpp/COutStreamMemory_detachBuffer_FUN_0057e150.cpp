// Name: support_trstream.cpp_COutStreamMemory_detachBuffer_FUN_0057e150
// Address: 0057e150
// Address Range: [[0057e150, 0057e174]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamMemory_detachBuffer_FUN_0057e150(COutStreamMemory *this_ptr,int *out_length)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamMemory_detachBuffer_FUN_0057e150(COutStreamMemory *this_ptr,int *out_length)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = this_ptr->buffer;
  *out_length = this_ptr->length;
  pvVar2 = (this_ptr->base).vtable;
  this_ptr->buffer = (char *)0x0;
  (**(code **)((int)pvVar2 + 0x14))(this_ptr);
  return (int)pcVar1;
}
