// Name: support_trstream.cpp_CInStreamMemory_read_FUN_0057d6b0
// Address: 0057d6b0
// Address Range: [[0057d6b0, 0057d70e]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_0057d6b0(CInStreamMemory *this_ptr,void *buffer,int count)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_0057d6b0(CInStreamMemory *this_ptr,void *buffer,int count)

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
