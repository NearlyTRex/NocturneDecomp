// Name: unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0
// Address: 00573aa0
// Address Range: [[00573aa0, 00573aee]]
// Convention: __cdecl
// Signature: int __cdecl unkafter_turret_cpp_CInStreamFile_getChar_FUN_00573aa0(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl unkafter_turret_cpp_CInStreamFile_getChar_FUN_00573aa0(CInStreamFile *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = unkafter_turret_cpp_FUN_00573b90(this_ptr,this_ptr->position);
  if (-1 < iVar1) {
    iVar2 = this_ptr->position + 1;
    this_ptr->position = iVar2;
    if ((this_ptr->binary_mode == 0) && (iVar1 == 0xd)) {
      iVar1 = 10;
      iVar2 = unkafter_turret_cpp_FUN_00573b90(this_ptr,iVar2);
      if (iVar2 == 10) {
        this_ptr->position = this_ptr->position + 1;
        return 10;
      }
    }
  }
  return iVar1;
}
