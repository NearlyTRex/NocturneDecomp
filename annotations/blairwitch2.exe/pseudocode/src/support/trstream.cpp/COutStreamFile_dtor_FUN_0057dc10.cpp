// Name: support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10
// Address: 0057dc10
// Address Range: [[0057dc10, 0057dc6c]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)

{
  COutStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamFileTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamFileVTable;
  support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(this_ptr);
  pCVar1 = (COutStreamFile *)support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
