// Name: support_trstream.cpp_COutStreamFile_copy_FUN_0057dbe0
// Address: 0057dbe0
// Address Range: [[0057dbe0, 0057dbf3]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_copy_FUN_0057dbe0(COutStreamFile *this_ptr,COutStreamFile *other)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_copy_FUN_0057dbe0(COutStreamFile *this_ptr,COutStreamFile *other)

{
  COutStreamFile *pCVar1;
  uint unaff_retaddr;
  
  pCVar1 = (COutStreamFile *)
           support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,unaff_retaddr);
  (pCVar1->base).vtable = &g_COutStreamFileVTable;
  return pCVar1;
}
