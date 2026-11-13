// Name: support_trstream.cpp_CInStreamFile_copy_FUN_0057ce90
// Address: 0057ce90
// Address Range: [[0057ce90, 0057cea3]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_0057ce90(CInStreamFile *this_ptr,CInStreamFile *other)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_0057ce90(CInStreamFile *this_ptr,CInStreamFile *other)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)support_trstream_cpp_CInStream_ctor_FUN_0057b9c0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamFileVTable;
  return pCVar1;
}
