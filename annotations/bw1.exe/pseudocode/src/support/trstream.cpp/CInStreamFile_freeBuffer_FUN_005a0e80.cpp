// Name: support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80
// Address: 005a0e80
// Address Range: [[005a0e80, 005a0ebb]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamFile_freeBuffer_FUN_005a0e80(CInStreamFile *this_ptr)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamFile_freeBuffer_FUN_005a0e80(CInStreamFile *this_ptr)

{
  if (this_ptr->buffer_alloc != (void *)0x0) {
    FUN_005c09f0(this_ptr->buffer_alloc);
    this_ptr->buffer_alloc = (void *)0x0;
  }
  this_ptr->buffer_start = 0;
  this_ptr->buffer_capacity = 0;
  this_ptr->buffer_length = 0;
  this_ptr->buffer = (char *)0x0;
  return;
}
