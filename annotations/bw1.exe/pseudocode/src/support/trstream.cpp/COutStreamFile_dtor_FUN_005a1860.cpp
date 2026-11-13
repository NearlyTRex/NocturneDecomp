// Name: support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860
// Address: 005a1860
// Address Range: [[005a1860, 005a18bc]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile *this_ptr,uint flags)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile *this_ptr,uint flags)

{
  COutStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_COutStreamFileTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamFileVTable;
  support_trstream_cpp_COutStreamFile_close_FUN_005a19b0(this_ptr);
  pCVar1 = (COutStreamFile *)support_trstream_cpp_COutStream_dtor_FUN_005a14b0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
