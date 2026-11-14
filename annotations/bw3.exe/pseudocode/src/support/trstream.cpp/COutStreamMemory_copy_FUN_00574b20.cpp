// Name: support_trstream.cpp_COutStreamMemory_copy_FUN_00574b20
// Address: 00574b20
// Address Range: [[00574b20, 00574b33]]
// Convention: __cdecl
// Signature: COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_00574b20(COutStreamMemory *this_ptr,COutStreamMemory *other)

#include "nocturne.h"

COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_00574b20(COutStreamMemory *this_ptr,COutStreamMemory *other)

{
  COutStreamMemory *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamMemory *)
           support_trstream_cpp_COutStream_dtor_FUN_005744a0(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamMemoryVTable;
  return pCVar1;
}
