// Name: support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_00574ac0
// Address: 00574ac0
// Address Range: [[00574ac0, 00574b11]]
// Convention: __cdecl
// Signature: COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_00574ac0(COutStreamMemory *this_ptr,char *buffer,int capacity)

#include "nocturne.h"

COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_00574ac0(COutStreamMemory *this_ptr,char *buffer,int capacity)

{
  COutStreamMemory *this_ptr_00;
  uint unaff_ESI;
  
  this_ptr_00 = (COutStreamMemory *)
                support_trstream_cpp_COutStream_dtor_FUN_005744a0(&this_ptr->base,unaff_ESI);
  (this_ptr_00->base).vtable = &g_COutStreamMemoryVTable;
  this_ptr_00->buffer = (char *)0x0;
  this_ptr_00->capacity = 0;
  this_ptr_00->position = 0;
  this_ptr_00->length = 0;
  this_ptr_00->growable = 1;
  support_trstream_cpp_COutStreamMemory_open_FUN_00574d50(this_ptr_00,(int)buffer,capacity);
  return this_ptr_00;
}
