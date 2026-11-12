// Name: support_trstream.cpp_CInStreamFile_close_FUN_00573db0
// Address: 00573db0
// Address Range: [[00573db0, 00573df1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle != (HANDLE)0x0) {
    CloseHandle(this_ptr->file_handle);
    this_ptr->file_handle = (HANDLE)0x0;
  }
  this_ptr->file_offset = 0;
  this_ptr->position = 0;
  this_ptr->file_size = 0;
  support_trstream_cpp_FUN_00573e70(this_ptr);
  return 1;
}
