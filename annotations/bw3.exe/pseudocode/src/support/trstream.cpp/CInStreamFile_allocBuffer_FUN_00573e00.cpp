// Name: support_trstream.cpp_CInStreamFile_allocBuffer_FUN_00573e00
// Address: 00573e00
// Address Range: [[00573e00, 00573e6c]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamFile_allocBuffer_FUN_00573e00(CInStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_trstream_cpp_CInStreamFile_allocBuffer_FUN_00573e00(CInStreamFile *this_ptr)

{
  void *pvVar1;
  
  support_trstream_cpp_CInStreamFile_freeBuffer_FUN_00573e70(this_ptr);
  this_ptr->buffer_capacity = 0x1000;
  pvVar1 = malloc(this_ptr->buffer_capacity + 0x1f);
  this_ptr->buffer_alloc = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d71de0 = "..\\support\\trstream.cpp";
    _DAT_01d71de4 = 0x62c;
    core_main_c_FUN_004e4330("Out of memory");
  }
  this_ptr->buffer_start = 0;
  this_ptr->buffer_length = 0;
  this_ptr->buffer = (char *)((int)this_ptr->buffer_alloc + 0x1fU & 0xffffffe0);
  return;
}
