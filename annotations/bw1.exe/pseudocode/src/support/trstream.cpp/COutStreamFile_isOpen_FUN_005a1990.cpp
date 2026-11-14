// Name: support_trstream.cpp_COutStreamFile_isOpen_FUN_005a1990
// Address: 005a1990
// Address Range: [[005a1990, 005a19aa]]
// Convention: __cdecl
// Signature: bool __cdecl support_trstream_cpp_COutStreamFile_isOpen_FUN_005a1990(COutStreamFile *this_ptr)

#include "nocturne.h"

bool __cdecl support_trstream_cpp_COutStreamFile_isOpen_FUN_005a1990(COutStreamFile *this_ptr)

{
  if (this_ptr->file == (_FILE *)0x0) {
    return false;
  }
  return (this_ptr->file->_flag & 0x20) == 0;
}
