// Name: support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0
// Address: 0057d5a0
// Address Range: [[0057d5a0, 0057d5fc]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0(CInStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0(CInStreamMemory *this_ptr,uint flags)

{
  CInStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamMemoryTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte ***)this_ptr = &g_CInStreamMemoryVTable;
  support_trstream_cpp_FUN_0057d7b0(this_ptr);
  pCVar1 = (CInStreamMemory *)unkaddr_0057b9a0_cpp_FUN_0057b9d0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
