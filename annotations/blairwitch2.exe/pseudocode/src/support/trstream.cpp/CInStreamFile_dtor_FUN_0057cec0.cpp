// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
// Address: 0057cec0
// Address Range: [[0057cec0, 0057cf1c]]
// Convention: unknown
// Signature: CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(this_ptr);
  pCVar1 = (CInStreamFile *)core_terrain_cpp_FUN_0057b9d0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
