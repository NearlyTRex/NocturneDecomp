// Name: support_trstream.cpp_CInStreamFile_copy_FUN_005a0a20
// Address: 005a0a20
// Address Range: [[005a0a20, 005a0a33]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_005a0a20(CInStreamFile *this_ptr,CInStreamFile *other)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_005a0a20(CInStreamFile *this_ptr,CInStreamFile *other)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)support_trstream_cpp_CInStream_ctor_FUN_0059f540(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamFileVTable;
  return pCVar1;
}
