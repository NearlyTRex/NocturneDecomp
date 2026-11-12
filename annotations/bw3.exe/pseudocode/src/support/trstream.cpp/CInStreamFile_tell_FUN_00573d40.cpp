// Name: support_trstream.cpp_CInStreamFile_tell_FUN_00573d40
// Address: 00573d40
// Address Range: [[00573d40, 00573d53]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_00573d40(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_00573d40(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xffffffff;
  }
  return this_ptr->position;
}
