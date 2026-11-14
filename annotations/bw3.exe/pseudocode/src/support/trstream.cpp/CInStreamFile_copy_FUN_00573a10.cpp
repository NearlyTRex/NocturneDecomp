// Name: support_trstream.cpp_CInStreamFile_copy_FUN_00573a10
// Address: 00573a10
// Address Range: [[00573a10, 00573a23]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_00573a10(CInStreamFile *this_ptr,CInStreamFile *other)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_00573a10(CInStreamFile *this_ptr,CInStreamFile *other)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)support_trstream_cpp_CInStream_ctor_FUN_00572530(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamFileVTable;
  return pCVar1;
}
