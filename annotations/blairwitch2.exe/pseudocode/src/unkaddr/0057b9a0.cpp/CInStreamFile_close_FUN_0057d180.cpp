// Name: unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180
// Address: 0057d180
// Address Range: [[0057d180, 0057d1c1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle != (HANDLE)0x0) {
    CloseHandle(this_ptr->file_handle);
    this_ptr->file_handle = (HANDLE)0x0;
  }
  this_ptr->file_offset = 0;
  this_ptr->position = 0;
  this_ptr->file_size = 0;
  support_trstream_cpp_FUN_0057d240(this_ptr);
  return 1;
}
