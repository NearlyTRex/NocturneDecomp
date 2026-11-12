// Name: support_trstream.cpp_CInStreamFile_ctorOpen_FUN_00573920
// Address: 00573920
// Address Range: [[00573920, 0057398d]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_00573920(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)

#include "nocturne.h"

uint * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_00573920(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)

{
  CInStreamFile *this_ptr_00;
  
  this_ptr_00 = (CInStreamFile *)support_trstream_cpp_FUN_00572530(this_ptr);
  this_ptr_00->vtable = &g_CInStreamFileVTable;
  this_ptr_00->file_handle = (HANDLE)0x0;
  this_ptr_00->file_size = 0;
  this_ptr_00->file_offset = 0;
  this_ptr_00->position = 0;
  this_ptr_00->buffer_alloc = (void *)0x0;
  this_ptr_00->buffer = (char *)0x0;
  this_ptr_00->buffer_start = 0;
  this_ptr_00->buffer_capacity = 0;
  this_ptr_00->buffer_length = 0;
  support_trstream_cpp_CInStreamFile_open_FUN_00573f50(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
