// Name: unkaddr_0059f520.cpp_CInStreamFile_ungetChar_FUN_005a0b00
// Address: 005a0b00
// Address Range: [[005a0b00, 005a0b6f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkaddr_0059f520_cpp_CInStreamFile_ungetChar_FUN_005a0b00(CInStreamFile *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl unkaddr_0059f520_cpp_CInStreamFile_ungetChar_FUN_005a0b00(CInStreamFile *this_ptr,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((((-1 < param_2) && (param_2 < 0x100)) && (this_ptr->file_handle != (HANDLE)0x0)) &&
     (0 < this_ptr->position)) {
    iVar1 = this_ptr->position + -1;
    this_ptr->position = iVar1;
    if (((param_2 == 10) && (this_ptr->binary_mode == 0)) && (0 < iVar1)) {
      uVar2 = unkaddr_0059f520_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(this_ptr,iVar1);
      if (uVar2 == 10) {
        uVar2 = unkaddr_0059f520_cpp_CInStreamFile_readByteAt_FUN_005a0ba0
                          (this_ptr,this_ptr->position + -1);
        if (uVar2 == 0xd) {
          this_ptr->position = this_ptr->position + -1;
          return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}
