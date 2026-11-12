// Name: support_trstream.cpp_COutStreamFile_seek_FUN_0057dcf0
// Address: 0057dcf0
// Address Range: [[0057dcf0, 0057dd1d]]
// Convention: __cdecl
// Signature: bool __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_0057dcf0(COutStreamFile *this_ptr,long param_2,int param_3)

#include "nocturne.h"

bool __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_0057dcf0(COutStreamFile *this_ptr,long param_2,int param_3)

{
  int iVar1;
  
  if (this_ptr->file == (_FILE *)0x0) {
    return false;
  }
  iVar1 = _fseek(this_ptr->file,param_2,param_3);
  return iVar1 == 0;
}
