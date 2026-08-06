// Name: core_flies.cpp_CFlies_dtor_FUN_0048fc30
// Address: 0048fc30
// Address Range: [[0048fc30, 0048fc94]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_0048fc30(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_0048fc30(CFlies *this_ptr,uint flags)

{
  SFly *pSVar1;
  CFlies *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFliesTypeInfo_0059db30);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_flies_cpp_SFly_arrdtor_FUN_0048fce0(this_ptr->flies,0);
  ptr = (CFlies *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)&pSVar1[-7].control_points[0].z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
