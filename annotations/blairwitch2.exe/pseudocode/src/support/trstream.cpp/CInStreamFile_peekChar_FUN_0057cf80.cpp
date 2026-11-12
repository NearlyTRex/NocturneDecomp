// Name: support_trstream.cpp_CInStreamFile_peekChar_FUN_0057cf80
// Address: 0057cf80
// Address Range: [[0057cf80, 0057cfdf]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamFile_peekChar_FUN_0057cf80(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamFile_peekChar_FUN_0057cf80(CInStreamFile *this_ptr)

{
  int iVar1;
  
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xfffffffe;
  }
  if (this_ptr->position < this_ptr->file_size) {
    if ((this_ptr->position < this_ptr->buffer_start) ||
       (this_ptr->buffer_start + this_ptr->buffer_length <= this_ptr->position)) {
      iVar1 = support_trstream_cpp_FUN_0057d280(this_ptr);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)(byte)this_ptr->buffer[this_ptr->position - this_ptr->buffer_start];
  }
  return 0xffffffff;
}
