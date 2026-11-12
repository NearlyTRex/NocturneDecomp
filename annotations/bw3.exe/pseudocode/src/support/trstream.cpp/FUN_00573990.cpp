// Name: support_trstream.cpp_FUN_00573990
// Address: 00573990
// Address Range: [[00573990, 00573a04]]
// Convention: unknown
// Signature: CInStreamFile * support_trstream_cpp_FUN_00573990(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

CInStreamFile * support_trstream_cpp_FUN_00573990(uint param_1,uint param_2,uint param_3,int param_4)

{
  CInStreamFile *this_ptr;
  
  this_ptr = (CInStreamFile *)support_trstream_cpp_FUN_00572530(param_1);
  this_ptr->vtable = &g_CInStreamFileVTable;
  this_ptr->file_handle = (HANDLE)0x0;
  this_ptr->file_size = 0;
  this_ptr->file_offset = 0;
  this_ptr->position = 0;
  this_ptr->buffer_alloc = (void *)0x0;
  this_ptr->buffer = (char *)0x0;
  this_ptr->buffer_start = 0;
  this_ptr->buffer_capacity = 0;
  this_ptr->buffer_length = 0;
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0(this_ptr,param_2,param_3,param_4);
  return this_ptr;
}
