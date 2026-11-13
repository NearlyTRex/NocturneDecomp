// Name: support_trstream.cpp_CInStreamMemory_read_FUN_005a1300
// Address: 005a1300
// Address Range: [[005a1300, 005a135e]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_005a1300(CInStreamMemory *this_ptr,void *buffer,int count)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_005a1300(CInStreamMemory *this_ptr,void *buffer,int count)

{
  uint uVar1;
  char *pcVar2;
  
  if (this_ptr->data == (char *)0x0) {
    return -2;
  }
  if (this_ptr->position < this_ptr->size) {
    uVar1 = this_ptr->size - this_ptr->position;
    if ((int)uVar1 < count) {
      count = uVar1;
    }
    pcVar2 = this_ptr->data + this_ptr->position;
    for (uVar1 = (uint)count >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)buffer = *(uint *)pcVar2;
      pcVar2 = pcVar2 + 4;
      buffer = (char *)((int)buffer + 4);
    }
    for (uVar1 = count & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)buffer = *pcVar2;
      pcVar2 = pcVar2 + 1;
      buffer = (char *)((int)buffer + 1);
    }
    this_ptr->position = this_ptr->position + count;
    return count;
  }
  return -1;
}
