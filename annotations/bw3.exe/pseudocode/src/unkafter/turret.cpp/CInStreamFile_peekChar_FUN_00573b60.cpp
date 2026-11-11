// Name: unkafter_turret.cpp_CInStreamFile_peekChar_FUN_00573b60
// Address: 00573b60
// Address Range: [[00573b60, 00573b8d]]
// Convention: __cdecl
// Signature: int __cdecl unkafter_turret_cpp_CInStreamFile_peekChar_FUN_00573b60(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl unkafter_turret_cpp_CInStreamFile_peekChar_FUN_00573b60(CInStreamFile *this_ptr)

{
  int iVar1;
  
  iVar1 = unkafter_turret_cpp_FUN_00573b90(this_ptr,this_ptr->position);
  if (-1 < iVar1) {
    if ((this_ptr->binary_mode != 0) || (iVar1 != 0xd)) {
      return iVar1;
    }
    iVar1 = 10;
  }
  return iVar1;
}
