// Name: support_trstream.cpp_CInStreamFile_tell_FUN_0057d110
// Address: 0057d110
// Address Range: [[0057d110, 0057d123]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_0057d110(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_0057d110(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return -1;
  }
  return this_ptr->position;
}
