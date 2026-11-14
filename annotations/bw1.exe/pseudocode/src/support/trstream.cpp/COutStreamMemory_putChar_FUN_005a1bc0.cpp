// Name: support_trstream.cpp_COutStreamMemory_putChar_FUN_005a1bc0
// Address: 005a1bc0
// Address Range: [[005a1bc0, 005a1c2e]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamMemory_putChar_FUN_005a1bc0(COutStreamMemory *this_ptr,char ch)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamMemory_putChar_FUN_005a1bc0(COutStreamMemory *this_ptr,char ch)

{
  ulong new_size;
  char *pcVar1;
  int iVar2;
  
  if (this_ptr->capacity <= this_ptr->position) {
    if (this_ptr->growable == 0) {
      return -1;
    }
    new_size = this_ptr->position + 0x4000;
    pcVar1 = (char *)realloc(this_ptr->buffer,new_size);
    if (pcVar1 == (char *)0x0) {
      return -2;
    }
    this_ptr->buffer = pcVar1;
    this_ptr->capacity = new_size;
  }
  this_ptr->buffer[this_ptr->position] = ch;
  iVar2 = this_ptr->position + 1;
  this_ptr->position = iVar2;
  if (this_ptr->length <= iVar2) {
    this_ptr->length = iVar2;
  }
  return 0;
}
