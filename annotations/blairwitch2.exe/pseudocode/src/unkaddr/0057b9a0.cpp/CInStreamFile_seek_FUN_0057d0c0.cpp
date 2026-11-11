// Name: unkaddr_0057b9a0.cpp_CInStreamFile_seek_FUN_0057d0c0
// Address: 0057d0c0
// Address Range: [[0057d0c0, 0057d103]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_seek_FUN_0057d0c0(CInStreamFile *this_ptr,int param_2,uint param_3)

#include "nocturne.h"

uint __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_seek_FUN_0057d0c0(CInStreamFile *this_ptr,int param_2,uint param_3)

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
