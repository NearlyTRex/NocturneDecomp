// Name: support_trstream.cpp_COutStreamFile_tell_FUN_00574960
// Address: 00574960
// Address Range: [[00574960, 0057497a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_00574960(COutStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_00574960(COutStreamFile *this_ptr)

{
  uint uVar1;
  
  if (this_ptr->file == (_FILE *)0x0) {
    return 0xffffffff;
  }
  uVar1 = _ftell(this_ptr->file);
  return uVar1;
}
