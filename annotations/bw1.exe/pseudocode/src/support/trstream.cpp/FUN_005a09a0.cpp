// Name: support_trstream.cpp_FUN_005a09a0
// Address: 005a09a0
// Address Range: [[005a09a0, 005a0a14]]
// Convention: unknown
// Signature: CInStreamFile * support_trstream_cpp_FUN_005a09a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

CInStreamFile * support_trstream_cpp_FUN_005a09a0(uint param_1,uint param_2,uint param_3,int param_4)

{
  CInStreamFile *this_ptr;
  
  this_ptr = (CInStreamFile *)support_trstream_cpp_FUN_0059f540(param_1);
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
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(this_ptr,param_2,param_3,param_4);
  return this_ptr;
}
