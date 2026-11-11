// Name: support_trstream.cpp_CInStreamFile_fillBuffer_FUN_005a0ec0
// Address: 005a0ec0
// Address Range: [[005a0ec0, 005a0f52]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_fillBuffer_FUN_005a0ec0(CInStreamFile *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_fillBuffer_FUN_005a0ec0(CInStreamFile *this_ptr,int param_2)

{
  uint lDistanceToMove;
  int iVar1;
  int iVar2;
  uint uVar3;
  DWORD local_14;
  
  lDistanceToMove = param_2 + this_ptr->file_offset & 0xfffff000;
  iVar1 = lDistanceToMove - this_ptr->file_offset;
  iVar2 = this_ptr->file_size - iVar1;
  this_ptr->buffer_length = iVar2;
  this_ptr->buffer_start = iVar1;
  uVar3 = iVar2 + 0xfffU & 0xfffff000;
  this_ptr->buffer_length = uVar3;
  if (this_ptr->buffer_capacity < (int)uVar3) {
    this_ptr->buffer_length = this_ptr->buffer_capacity;
  }
  SetFilePointer(this_ptr->file_handle,lDistanceToMove,(PLONG)0x0,0);
  local_14 = 0;
  ReadFile(this_ptr->file_handle,this_ptr->buffer,this_ptr->buffer_length,&local_14,
           (LPOVERLAPPED)0x0);
  this_ptr->buffer_length = local_14;
  if ((int)local_14 < 1) {
    this_ptr->buffer_length = 0;
    return 0;
  }
  return 1;
}
