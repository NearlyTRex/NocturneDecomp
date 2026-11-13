// Name: support_trstream.cpp_COutStreamFile_copy_FUN_00574820
// Address: 00574820
// Address Range: [[00574820, 00574833]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_copy_FUN_00574820(COutStreamFile *this_ptr,COutStreamFile *other)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_copy_FUN_00574820(COutStreamFile *this_ptr,COutStreamFile *other)

{
  COutStreamFile *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamFile *)
           support_trstream_cpp_COutStream_dtor_FUN_005744a0(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamFileVTable;
  return pCVar1;
}
