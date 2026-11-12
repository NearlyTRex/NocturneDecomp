// Name: support_trstream.cpp_CInStreamFile_ungetChar_FUN_0057cf40
// Address: 0057cf40
// Address Range: [[0057cf40, 0057cf74]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_0057cf40(CInStreamFile *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_ungetChar_FUN_0057cf40(CInStreamFile *this_ptr,int param_2)

{
  if ((((-1 < param_2) && (param_2 < 0x100)) && (this_ptr->file_handle != (HANDLE)0x0)) &&
     (0 < this_ptr->position)) {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
