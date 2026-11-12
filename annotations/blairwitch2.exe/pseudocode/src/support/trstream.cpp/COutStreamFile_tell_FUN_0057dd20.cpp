// Name: support_trstream.cpp_COutStreamFile_tell_FUN_0057dd20
// Address: 0057dd20
// Address Range: [[0057dd20, 0057dd3a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_0057dd20(COutStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_0057dd20(COutStreamFile *this_ptr)

{
  long lVar1;
  
  if (this_ptr->file == (_FILE *)0x0) {
    return 0xffffffff;
  }
  lVar1 = _ftell(this_ptr->file);
  return lVar1;
}
