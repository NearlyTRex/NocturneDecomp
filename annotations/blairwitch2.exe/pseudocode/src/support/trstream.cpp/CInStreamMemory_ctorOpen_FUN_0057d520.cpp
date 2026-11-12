// Name: support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520
// Address: 0057d520
// Address Range: [[0057d520, 0057d56a]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_0057d520(CInStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

uint * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_0057d520(CInStreamMemory *this_ptr,int param_2,int param_3)

{
  CInStreamMemory *this_ptr_00;
  
  this_ptr_00 = (CInStreamMemory *)core_terrain_cpp_FUN_0057b9c0(this_ptr);
  this_ptr_00->vtable = &g_CInStreamMemoryVTable;
  this_ptr_00->data = (char *)0x0;
  this_ptr_00->size = 0;
  this_ptr_00->position = 0;
  this_ptr_00->owns_data = 0;
  support_trstream_cpp_CInStreamMemory_open_FUN_0057d800(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
