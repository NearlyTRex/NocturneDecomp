// Name: support_trstream.cpp_CInStreamFile_seek_FUN_00573cf0
// Address: 00573cf0
// Address Range: [[00573cf0, 00573d33]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile *this_ptr,int offset,int origin)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile *this_ptr,int offset,int origin)

{
  if (this_ptr->file_handle != (HANDLE)0x0) {
    if (origin != 0) {
      if ((uint)origin < 2) {
        offset = offset + this_ptr->position;
      }
      else {
        if (origin != 2) {
          return 0;
        }
        offset = offset + this_ptr->file_size;
      }
    }
    if ((-1 < offset) && (offset <= this_ptr->file_size)) {
      this_ptr->position = offset;
      return 1;
    }
  }
  return 0;
}
