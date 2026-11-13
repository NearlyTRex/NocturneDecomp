// Name: support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0
// Address: 0057d5a0
// Address Range: [[0057d5a0, 0057d5fc]]
// Convention: __cdecl
// Signature: CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0(CInStreamMemory *this_ptr,uint flags)

#include "nocturne.h"

CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0(CInStreamMemory *this_ptr,uint flags)

{
  CInStreamMemory *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CInStreamMemoryTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamMemoryVTable;
  support_trstream_cpp_CInStreamMemory_close_FUN_0057d7b0(this_ptr);
  pCVar1 = (CInStreamMemory *)support_trstream_cpp_CInStream_dtor_FUN_0057b9d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
