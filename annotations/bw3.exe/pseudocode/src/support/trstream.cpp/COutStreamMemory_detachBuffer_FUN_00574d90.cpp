// Name: support_trstream.cpp_COutStreamMemory_detachBuffer_FUN_00574d90
// Address: 00574d90
// Address Range: [[00574d90, 00574db4]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamMemory_detachBuffer_FUN_00574d90(COutStreamMemory *this_ptr,int *param_2)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamMemory_detachBuffer_FUN_00574d90(COutStreamMemory *this_ptr,int *param_2)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = this_ptr->buffer;
  *param_2 = this_ptr->length;
  pvVar2 = (this_ptr->base).vtable;
  this_ptr->buffer = (char *)0x0;
  (**(code **)((int)pvVar2 + 0x14))(this_ptr);
  return (int)pcVar1;
}
