// Name: support_trstream.cpp_CInStreamFile_ctorOpenInDirectory_FUN_005a09a0
// Address: 005a09a0
// Address Range: [[005a09a0, 005a0a14]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpenInDirectory_FUN_005a09a0(CInStreamFile *this_ptr,char *directory,char *filename,int binary_mode)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpenInDirectory_FUN_005a09a0(CInStreamFile *this_ptr,char *directory,char *filename,int binary_mode)

{
  CInStreamFile *this_ptr_00;
  
  this_ptr_00 = (CInStreamFile *)support_trstream_cpp_CInStream_ctor_FUN_0059f540(&this_ptr->base);
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
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
            (this_ptr_00,directory,filename,binary_mode);
  return this_ptr_00;
}
