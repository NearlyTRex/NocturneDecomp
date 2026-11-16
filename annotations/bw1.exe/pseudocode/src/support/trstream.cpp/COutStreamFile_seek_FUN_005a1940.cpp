// Name: support_trstream.cpp_COutStreamFile_seek_FUN_005a1940
// Address: 005a1940
// Address Range: [[005a1940, 005a196d]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_005a1940(COutStreamFile *this_ptr,int offset,int origin)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_005a1940(COutStreamFile *this_ptr,int offset,int origin)

{
  int iVar1;
  
  if (this_ptr->file == (_FILE *)0x0) {
    return 0;
  }
  iVar1 = _fseek(this_ptr->file,offset,origin);
  return (uint)(iVar1 == 0);
}
