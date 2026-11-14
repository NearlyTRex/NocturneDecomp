// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
// Address: 0057cec0
// Address Range: [[0057cec0, 0057cf1c]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(this_ptr);
  pCVar1 = (CInStreamFile *)support_trstream_cpp_CInStream_dtor_FUN_0057b9d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
