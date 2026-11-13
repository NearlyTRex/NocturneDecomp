// Name: support_trstream.cpp_CInStreamFile_getChar_FUN_0057cf20
// Address: 0057cf20
// Address Range: [[0057cf20, 0057cf3a]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_getChar_FUN_0057cf20(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_getChar_FUN_0057cf20(CInStreamFile *this_ptr)

{
  int iVar1;
  
  iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0xc))(this_ptr);
  if (-1 < iVar1) {
    this_ptr->position = this_ptr->position + 1;
  }
  return iVar1;
}
