// Name: support_trstream.cpp_CInStreamFile_isEof_FUN_005a0d90
// Address: 005a0d90
// Address Range: [[005a0d90, 005a0db4]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_isEof_FUN_005a0d90(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_isEof_FUN_005a0d90(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return -1;
  }
  if (this_ptr->file_size <= this_ptr->position) {
    return 1;
  }
  return 0;
}
