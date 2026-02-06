// Name: core_flies.cpp_CFlies_dtor_FUN_004cccb0
// Address: 004cccb0
// Address Range: [[004cccb0, 004ccd14]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004cccb0(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004cccb0(CFlies *this_ptr,uint flags)

{
  SFly *pSVar1;
  CFlies *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFliesTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_flies_cpp_freeFlies_FUN_004ccd60((SFly *)this_ptr->unk1);
  ptr = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)pSVar1[-7].unk2,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
