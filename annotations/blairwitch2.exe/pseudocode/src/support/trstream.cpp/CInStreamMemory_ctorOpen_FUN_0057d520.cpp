// Name: support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520
// Address: 0057d520
// Address Range: [[0057d520, 0057d56a]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_0057d520(CInStreamMemory *this_ptr,char *data,int size)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_0057d520(CInStreamMemory *this_ptr,char *data,int size)

{
  CInStreamMemory *this_ptr_00;
  
  this_ptr_00 = (CInStreamMemory *)support_trstream_cpp_CInStream_ctor_FUN_0057b9c0(&this_ptr->base)
  ;
  (this_ptr_00->base).vtable = &g_CInStreamMemoryVTable;
  this_ptr_00->data = (char *)0x0;
  this_ptr_00->size = 0;
  this_ptr_00->position = 0;
  this_ptr_00->owns_data = 0;
  support_trstream_cpp_CInStreamMemory_open_FUN_0057d800(this_ptr_00,(int)data,size);
  return this_ptr_00;
}
