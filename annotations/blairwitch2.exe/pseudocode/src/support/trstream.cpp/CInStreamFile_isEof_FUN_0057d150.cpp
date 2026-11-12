// Name: support_trstream.cpp_CInStreamFile_isEof_FUN_0057d150
// Address: 0057d150
// Address Range: [[0057d150, 0057d174]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_isEof_FUN_0057d150(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_isEof_FUN_0057d150(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xffffffff;
  }
  if (this_ptr->file_size <= this_ptr->position) {
    return 1;
  }
  return 0;
}
