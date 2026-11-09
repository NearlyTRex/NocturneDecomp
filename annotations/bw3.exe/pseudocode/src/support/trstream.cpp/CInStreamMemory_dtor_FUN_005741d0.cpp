// Name: support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0
// Address: 005741d0
// Address Range: [[005741d0, 0057422c]]
// Convention: unknown
// Signature: CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory *this_ptr,uint flags)

{
  CInStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CInStreamMemoryTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  *(byte ***)this_ptr = &g_CInStreamMemoryVTable;
  support_trstream_cpp_FUN_005743f0(this_ptr);
  pCVar1 = (CInStreamMemory *)unkafter_turret_cpp_FUN_00572540(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
