// Name: support_trstream.cpp_CInStreamFile_tell_FUN_005a0d50
// Address: 005a0d50
// Address Range: [[005a0d50, 005a0d63]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return -1;
  }
  return this_ptr->position;
}
