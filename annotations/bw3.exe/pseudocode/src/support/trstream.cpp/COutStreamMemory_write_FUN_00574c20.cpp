// Name: support_trstream.cpp_COutStreamMemory_write_FUN_00574c20
// Address: 00574c20
// Address Range: [[00574c20, 00574cae]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamMemory_write_FUN_00574c20(COutStreamMemory *this_ptr,void *data,int size)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamMemory_write_FUN_00574c20(COutStreamMemory *this_ptr,void *data,int size)

{
  ulong new_size;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = this_ptr->capacity - this_ptr->position;
  if ((int)uVar1 < size) {
    if (this_ptr->growable == 0) {
      size = uVar1;
      if (uVar1 == 0) {
        return -1;
      }
    }
    else {
      new_size = this_ptr->position + 0x4000 + size;
      pcVar2 = (char *)realloc(this_ptr->buffer,new_size);
      if (pcVar2 == (char *)0x0) {
        return -2;
      }
      this_ptr->buffer = pcVar2;
      this_ptr->capacity = new_size;
    }
  }
  pcVar2 = this_ptr->buffer + this_ptr->position;
  for (uVar1 = (uint)size >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint *)pcVar2 = *(uint *)data;
    data = (char *)((int)data + (uint)bVar4 * -8 + 4);
    pcVar2 = pcVar2 + (uint)bVar4 * -8 + 4;
  }
  for (uVar1 = size & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar2 = *(char *)data;
    data = (char *)((int)data + (uint)bVar4 * -2 + 1);
    pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
  }
  iVar3 = this_ptr->position + size;
  this_ptr->position = iVar3;
  if (this_ptr->length <= iVar3) {
    this_ptr->length = iVar3;
  }
  return size;
}
