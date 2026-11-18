// Name: support_trstream.cpp_CInStreamFile_ungetChar_FUN_00573af0
// Address: 00573af0
// Address Range: [[00573af0, 00573b5f]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_00573af0(CInStreamFile *this_ptr,int ch)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_00573af0(CInStreamFile *this_ptr,int ch)

{
  int position;
  uint uVar1;
  
  if ((((-1 < ch) && (ch < 0x100)) && (this_ptr->file_handle != (HANDLE)0x0)) &&
     (0 < this_ptr->position)) {
    position = this_ptr->position + -1;
    this_ptr->position = position;
    if (((ch == 10) && (this_ptr->binary_mode == 0)) && (0 < position)) {
      uVar1 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_00573b90(this_ptr,position);
      if (uVar1 == 10) {
        uVar1 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_00573b90
                          (this_ptr,this_ptr->position + -1);
        if (uVar1 == 0xd) {
          this_ptr->position = this_ptr->position + -1;
          return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}
