// Name: support_trstream.cpp_COutStreamFile_close_FUN_005749a0
// Address: 005749a0
// Address Range: [[005749a0, 005749c9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_close_FUN_005749a0(COutStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_close_FUN_005749a0(COutStreamFile *this_ptr)

{
  if (this_ptr->file == (_FILE *)0x0) {
    return 1;
  }
  _fclose(this_ptr->file);
  this_ptr->file = (_FILE *)0x0;
  return 1;
}
