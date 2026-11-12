// Name: support_trstream.cpp_CInStreamFile_ungetChar_FUN_00573af0
// Address: 00573af0
// Address Range: [[00573af0, 00573b5f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_00573af0(CInStreamFile *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_00573af0(CInStreamFile *this_ptr,int param_2)

{
  int iVar1;
  
  if ((((-1 < param_2) && (param_2 < 0x100)) && (this_ptr->file_handle != (HANDLE)0x0)) &&
     (0 < this_ptr->position)) {
    iVar1 = this_ptr->position + -1;
    this_ptr->position = iVar1;
    if (((param_2 == 10) && (this_ptr->binary_mode == 0)) && (0 < iVar1)) {
      iVar1 = support_trstream_cpp_FUN_00573b90(this_ptr,iVar1);
      if (iVar1 == 10) {
        iVar1 = support_trstream_cpp_FUN_00573b90(this_ptr,this_ptr->position + -1);
        if (iVar1 == 0xd) {
          this_ptr->position = this_ptr->position + -1;
          return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}
