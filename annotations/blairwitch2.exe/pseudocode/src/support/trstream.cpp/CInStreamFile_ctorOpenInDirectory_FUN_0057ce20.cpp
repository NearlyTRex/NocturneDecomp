// Name: support_trstream.cpp_CInStreamFile_ctorOpenInDirectory_FUN_0057ce20
// Address: 0057ce20
// Address Range: [[0057ce20, 0057ce8d]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trstream_cpp_CInStreamFile_ctorOpenInDirectory_FUN_0057ce20(CInStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * __cdecl support_trstream_cpp_CInStreamFile_ctorOpenInDirectory_FUN_0057ce20(CInStreamFile *this_ptr,uint param_2,uint param_3)

{
  CInStreamFile *this_ptr_00;
  
  this_ptr_00 = (CInStreamFile *)core_terrain_cpp_FUN_0057b9c0(this_ptr);
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
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
