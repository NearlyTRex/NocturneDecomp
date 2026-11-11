// Name: support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10
// Address: 005a0e10
// Address Range: [[005a0e10, 005a0e7c]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamFile_allocBuffer_FUN_005a0e10(CInStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_trstream_cpp_CInStreamFile_allocBuffer_FUN_005a0e10(CInStreamFile *this_ptr)

{
  void *pvVar1;
  
  support_trstream_cpp_CInStreamFile_freeBuffer_FUN_005a0e80(this_ptr);
  this_ptr->buffer_capacity = 0x1000;
  pvVar1 = malloc(this_ptr->buffer_capacity + 0x1f);
  this_ptr->buffer_alloc = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d1d400 = "..\\support\\trstream.cpp";
    _DAT_01d1d404 = 0x62c;
    core_main_c_FUN_005030e0("Out of memory");
  }
  this_ptr->buffer_start = 0;
  this_ptr->buffer_length = 0;
  this_ptr->buffer = (char *)((int)this_ptr->buffer_alloc + 0x1fU & 0xffffffe0);
  return;
}
