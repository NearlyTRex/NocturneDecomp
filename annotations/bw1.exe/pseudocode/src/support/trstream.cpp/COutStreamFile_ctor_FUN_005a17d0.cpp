// Name: support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0
// Address: 005a17d0
// Address Range: [[005a17d0, 005a17ea]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0(COutStreamFile *this_ptr)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0(COutStreamFile *this_ptr)

{
  COutStreamFile *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamFile *)
           support_trstream_cpp_COutStream_dtor_FUN_005a14b0(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamFileVTable;
  pCVar1->file = (_FILE *)0x0;
  return pCVar1;
}
