// Name: support_trstream.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0
// Address: 0057cdb0
// Address Range: [[0057cdb0, 0057ce16]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_0057cdb0(CInStreamFile *this_ptr,char *path)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_0057cdb0(CInStreamFile *this_ptr,char *path)

{
  CInStreamFile *this_ptr_00;
  
  this_ptr_00 = (CInStreamFile *)support_trstream_cpp_CInStream_ctor_FUN_0057b9c0(&this_ptr->base);
  (this_ptr_00->base).vtable = &g_CInStreamFileVTable;
  this_ptr_00->file_handle = (HANDLE)0x0;
  this_ptr_00->file_size = 0;
  this_ptr_00->file_offset = 0;
  this_ptr_00->position = 0;
  this_ptr_00->buffer_alloc = (void *)0x0;
  this_ptr_00->buffer = (char *)0x0;
  this_ptr_00->buffer_start = 0;
  this_ptr_00->buffer_capacity = 0;
  this_ptr_00->buffer_length = 0;
  support_trstream_cpp_CInStreamFile_open_FUN_0057d320(this_ptr_00,path);
  return this_ptr_00;
}
