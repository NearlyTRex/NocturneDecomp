// Name: support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150
// Address: 00574150
// Address Range: [[00574150, 0057419a]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_00574150(CInStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

uint * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_00574150(CInStreamMemory *this_ptr,int param_2,int param_3)

{
  CInStreamMemory *this_ptr_00;
  
  this_ptr_00 = (CInStreamMemory *)support_trstream_cpp_FUN_00572530(this_ptr);
  this_ptr_00->vtable = &g_CInStreamMemoryVTable;
  this_ptr_00->data = (char *)0x0;
  this_ptr_00->size = 0;
  this_ptr_00->position = 0;
  this_ptr_00->owns_data = 0;
  support_trstream_cpp_CInStreamMemory_open_FUN_00574440(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
