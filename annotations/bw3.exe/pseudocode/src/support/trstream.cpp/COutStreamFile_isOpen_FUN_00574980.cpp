// Name: support_trstream.cpp_COutStreamFile_isOpen_FUN_00574980
// Address: 00574980
// Address Range: [[00574980, 0057499a]]
// Convention: __cdecl
// Signature: bool __cdecl support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(COutStreamFile *this_ptr)

#include "nocturne.h"

bool __cdecl support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(COutStreamFile *this_ptr)

{
  if (this_ptr->file == (_FILE *)0x0) {
    return false;
  }
  return (this_ptr->file->_flag & 0x20) == 0;
}
