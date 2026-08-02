// Name: core_flies.cpp_CFlies_dtor_FUN_0048fc30
// Address: 0048fc30
// Address Range: [[0048fc30, 0048fc94]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_0048fc30(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_0048fc30(CFlies *this_ptr,uint flags)

{
  int iVar1;
  CFlies *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFliesTypeInfo_0059db30);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  iVar1 = core_flies_cpp_FUN_0048fce0(this_ptr->flies,0);
  pCVar2 = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x160),1)
  ;
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
