// Name: unkaddr_0059f520.cpp_CInStreamFile_ctorOpen_FUN_005a0930
// Address: 005a0930
// Address Range: [[005a0930, 005a099d]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl unkaddr_0059f520_cpp_CInStreamFile_ctorOpen_FUN_005a0930(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)

#include "nocturne.h"

uint * __cdecl unkaddr_0059f520_cpp_CInStreamFile_ctorOpen_FUN_005a0930(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)

{
  CInStreamFile *this_ptr_00;
  
  this_ptr_00 = (CInStreamFile *)unkaddr_0059f520_cpp_FUN_0059f540(this_ptr);
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
  support_trstream_cpp_CInStreamFile_open_FUN_005a0f60(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
