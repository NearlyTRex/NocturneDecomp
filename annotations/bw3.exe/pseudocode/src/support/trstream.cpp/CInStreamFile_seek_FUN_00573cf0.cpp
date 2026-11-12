// Name: support_trstream.cpp_CInStreamFile_seek_FUN_00573cf0
// Address: 00573cf0
// Address Range: [[00573cf0, 00573d33]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile *this_ptr,int param_2,uint param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile *this_ptr,int param_2,uint param_3)

{
  if (this_ptr->file_handle != (HANDLE)0x0) {
    if (param_3 != 0) {
      if (param_3 < 2) {
        param_2 = param_2 + this_ptr->position;
      }
      else {
        if (param_3 != 2) {
          return 0;
        }
        param_2 = param_2 + this_ptr->file_size;
      }
    }
    if ((-1 < param_2) && (param_2 <= this_ptr->file_size)) {
      this_ptr->position = param_2;
      return 1;
    }
  }
  return 0;
}
