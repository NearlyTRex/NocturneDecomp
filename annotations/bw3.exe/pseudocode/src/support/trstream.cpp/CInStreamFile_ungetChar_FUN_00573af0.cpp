// Name: support_trstream.cpp_CInStreamFile_ungetChar_FUN_00573af0
// Address: 00573af0
// Address Range: [[00573af0, 00573b5f]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_00573af0(CInStreamFile *this_ptr,int ch)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_00573af0(CInStreamFile *this_ptr,int ch)

{
  int iVar1;
  uint uVar2;
  
  if ((((-1 < ch) && (ch < 0x100)) && (this_ptr->file_handle != (HANDLE)0x0)) &&
     (0 < this_ptr->position)) {
    iVar1 = this_ptr->position + -1;
    this_ptr->position = iVar1;
    if (((ch == 10) && (this_ptr->binary_mode == 0)) && (0 < iVar1)) {
      uVar2 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_00573b90(this_ptr,iVar1);
      if (uVar2 == 10) {
        uVar2 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_00573b90
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
