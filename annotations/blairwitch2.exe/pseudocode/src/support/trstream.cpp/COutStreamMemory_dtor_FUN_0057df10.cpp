// Name: support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10
// Address: 0057df10
// Address Range: [[0057df10, 0057df6c]]
// Convention: unknown
// Signature: COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory *this_ptr,uint flags)

{
  COutStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_COutStreamMemoryTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte ***)this_ptr = &g_COutStreamMemoryVTable;
  support_trstream_cpp_FUN_0057e0d0(this_ptr);
  pCVar1 = (COutStreamMemory *)support_trstream_cpp_FUN_0057d860(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
