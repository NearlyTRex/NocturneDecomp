// Name: support_trstream.cpp_CInStreamFile_read_FUN_00573c00
// Address: 00573c00
// Address Range: [[00573c00, 00573ce2]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile *this_ptr,void *buffer,int count)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile *this_ptr,void *buffer,int count)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int local_18;
  
  bVar6 = 0;
  if (this_ptr->file_handle != (HANDLE)0x0) {
    if (this_ptr->file_size <= this_ptr->position) {
      return -1;
    }
    uVar1 = this_ptr->file_size - this_ptr->position;
    if ((int)uVar1 < count) {
      count = uVar1;
    }
    local_18 = 0;
    while( true ) {
      if (count < 1) {
        return local_18;
      }
      if (((this_ptr->position < this_ptr->buffer_start) ||
          (this_ptr->buffer_start + this_ptr->buffer_length <= this_ptr->position)) &&
         (iVar2 = support_trstream_cpp_CInStreamFile_fillBuffer_FUN_00573eb0
                            (this_ptr,this_ptr->position), iVar2 == 0)) break;
      uVar1 = (this_ptr->buffer_start + this_ptr->buffer_length) - this_ptr->position;
      if (count < (int)uVar1) {
        uVar1 = count;
      }
      count = count - uVar1;
      pcVar4 = this_ptr->buffer + (this_ptr->position - this_ptr->buffer_start);
      pcVar5 = buffer;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar5 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
        pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      }
      buffer = (void *)((int)buffer + uVar1);
      local_18 = local_18 + uVar1;
      this_ptr->position = this_ptr->position + uVar1;
    }
  }
  return -2;
}
