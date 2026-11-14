// Name: support_trstream.cpp_CInStreamFile_getChar_FUN_005a0ab0
// Address: 005a0ab0
// Address Range: [[005a0ab0, 005a0afe]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_getChar_FUN_005a0ab0(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_getChar_FUN_005a0ab0(CInStreamFile *this_ptr)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(this_ptr,this_ptr->position);
  if (-1 < (int)uVar1) {
    iVar3 = this_ptr->position + 1;
    this_ptr->position = iVar3;
    if ((this_ptr->binary_mode == 0) && (uVar1 == 0xd)) {
      uVar1 = 10;
      uVar2 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(this_ptr,iVar3);
      if (uVar2 == 10) {
        this_ptr->position = this_ptr->position + 1;
        return 10;
      }
    }
  }
  return uVar1;
}
