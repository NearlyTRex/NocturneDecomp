// Name: support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0
// Address: 005a1ad0
// Address Range: [[005a1ad0, 005a1b21]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(COutStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

uint * __cdecl support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(COutStreamMemory *this_ptr,int param_2,int param_3)

{
  COutStreamMemory *this_ptr_00;
  
  this_ptr_00 = (COutStreamMemory *)support_trstream_cpp_FUN_005a14b0(this_ptr);
  this_ptr_00->vtable = &g_COutStreamMemoryVTable;
  this_ptr_00->buffer = (char *)0x0;
  this_ptr_00->capacity = 0;
  this_ptr_00->position = 0;
  this_ptr_00->length = 0;
  this_ptr_00->growable = 1;
  support_trstream_cpp_COutStreamMemory_open_FUN_005a1d60(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
