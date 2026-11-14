// Name: support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0
// Address: 005741d0
// Address Range: [[005741d0, 0057422c]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory *this_ptr,uint flags)

{
  CInStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CInStreamMemoryTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamMemoryVTable;
  support_trstream_cpp_CInStreamMemory_close_FUN_005743f0(this_ptr);
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_CInStream_dtor_FUN_00572540(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
