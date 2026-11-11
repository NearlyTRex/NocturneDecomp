// Name: support_trstream.cpp_COutStreamFile_tell_FUN_005a1970
// Address: 005a1970
// Address Range: [[005a1970, 005a198a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_005a1970(COutStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_005a1970(COutStreamFile *this_ptr)

{
  uint uVar1;
  
  if (this_ptr->file == (_FILE *)0x0) {
    return 0xffffffff;
  }
  uVar1 = _ftell(this_ptr->file);
  return uVar1;
}
