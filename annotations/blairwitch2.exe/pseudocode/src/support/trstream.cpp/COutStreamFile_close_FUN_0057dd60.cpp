// Name: support_trstream.cpp_COutStreamFile_close_FUN_0057dd60
// Address: 0057dd60
// Address Range: [[0057dd60, 0057dd89]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(COutStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(COutStreamFile *this_ptr)

{
  if (this_ptr->file == (_FILE *)0x0) {
    return 1;
  }
  _fclose(this_ptr->file);
  this_ptr->file = (_FILE *)0x0;
  return 1;
}
