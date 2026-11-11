// Name: support_trstream.cpp_COutStreamFile_close_FUN_005a19b0
// Address: 005a19b0
// Address Range: [[005a19b0, 005a19d9]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_close_FUN_005a19b0(COutStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_close_FUN_005a19b0(COutStreamFile *this_ptr)

{
  if (this_ptr->file == (_FILE *)0x0) {
    return 1;
  }
  _fclose(this_ptr->file);
  this_ptr->file = (_FILE *)0x0;
  return 1;
}
