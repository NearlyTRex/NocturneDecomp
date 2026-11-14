// Name: support_trstream.cpp_CInStreamFile_readByteAt_FUN_005a0ba0
// Address: 005a0ba0
// Address Range: [[005a0ba0, 005a0c06]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile *this_ptr,int param_2)

{
  int iVar1;
  
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xfffffffe;
  }
  if (param_2 < this_ptr->file_size) {
    if ((param_2 < this_ptr->buffer_start) ||
       (this_ptr->buffer_start + this_ptr->buffer_length <= param_2)) {
      iVar1 = support_trstream_cpp_CInStreamFile_fillBuffer_FUN_005a0ec0(this_ptr,param_2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)(byte)this_ptr->buffer[param_2 - this_ptr->buffer_start];
  }
  return 0xffffffff;
}
