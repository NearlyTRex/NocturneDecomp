// Name: support_trstream.cpp_COutStreamMemory_ctor_FUN_0057de40
// Address: 0057de40
// Address Range: [[0057de40, 0057de76]]
// Convention: __cdecl
// Signature: COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_ctor_FUN_0057de40(COutStreamMemory *this_ptr)

#include "nocturne.h"

COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_ctor_FUN_0057de40(COutStreamMemory *this_ptr)

{
  COutStreamMemory *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamMemory *)
           support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamMemoryVTable;
  pCVar1->buffer = (char *)0x0;
  pCVar1->capacity = 0;
  pCVar1->position = 0;
  pCVar1->length = 0;
  pCVar1->growable = 1;
  return pCVar1;
}
