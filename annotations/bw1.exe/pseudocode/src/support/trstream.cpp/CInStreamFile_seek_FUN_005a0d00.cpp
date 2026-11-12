// Name: support_trstream.cpp_CInStreamFile_seek_FUN_005a0d00
// Address: 005a0d00
// Address Range: [[005a0d00, 005a0d43]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_005a0d00(CInStreamFile *this_ptr,int param_2,uint param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_005a0d00(CInStreamFile *this_ptr,int param_2,uint param_3)

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
