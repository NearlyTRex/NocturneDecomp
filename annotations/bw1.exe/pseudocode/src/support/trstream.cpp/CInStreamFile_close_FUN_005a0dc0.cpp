// Name: support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
// Address: 005a0dc0
// Address Range: [[005a0dc0, 005a0e01]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle != (HANDLE)0x0) {
    CloseHandle(this_ptr->file_handle);
    this_ptr->file_handle = (HANDLE)0x0;
  }
  this_ptr->file_offset = 0;
  this_ptr->position = 0;
  this_ptr->file_size = 0;
  support_trstream_cpp_CInStreamFile_freeBuffer_FUN_005a0e80(this_ptr);
  return 1;
}
