// Name: support_trstream.cpp_COutStreamFile_seek_FUN_0057dcf0
// Address: 0057dcf0
// Address Range: [[0057dcf0, 0057dd1d]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_0057dcf0(COutStreamFile *this_ptr,int offset,int origin)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_0057dcf0(COutStreamFile *this_ptr,int offset,int origin)

{
  int iVar1;
  
  if (this_ptr->file == (_FILE *)0x0) {
    return 0;
  }
  iVar1 = _fseek(this_ptr->file,offset,origin);
  return (uint)(iVar1 == 0);
}
