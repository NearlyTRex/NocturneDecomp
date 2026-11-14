// Name: support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90
// Address: 00573b90
// Address Range: [[00573b90, 00573bf6]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_00573b90(CInStreamFile *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_00573b90(CInStreamFile *this_ptr,int param_2)

{
  int iVar1;
  
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xfffffffe;
  }
  if (param_2 < this_ptr->file_size) {
    if ((param_2 < this_ptr->buffer_start) ||
       (this_ptr->buffer_start + this_ptr->buffer_length <= param_2)) {
      iVar1 = support_trstream_cpp_CInStreamFile_fillBuffer_FUN_00573eb0(this_ptr,param_2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)(byte)this_ptr->buffer[param_2 - this_ptr->buffer_start];
  }
  return 0xffffffff;
}
