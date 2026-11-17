// Name: support_trstream.cpp_CInStreamFile_readByteAt_FUN_005a0ba0
// Address: 005a0ba0
// Address Range: [[005a0ba0, 005a0c06]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile *this_ptr,int position)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile *this_ptr,int position)

{
  int iVar1;
  
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xfffffffe;
  }
  if (position < this_ptr->file_size) {
    if ((position < this_ptr->buffer_start) ||
       (this_ptr->buffer_start + this_ptr->buffer_length <= position)) {
      iVar1 = support_trstream_cpp_CInStreamFile_fillBuffer_FUN_005a0ec0(this_ptr,position);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)(byte)this_ptr->buffer[position - this_ptr->buffer_start];
  }
  return 0xffffffff;
}
