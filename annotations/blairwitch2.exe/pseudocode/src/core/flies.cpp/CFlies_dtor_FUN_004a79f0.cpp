// Name: core_flies.cpp_CFlies_dtor_FUN_004a79f0
// Address: 004a79f0
// Address Range: [[004a79f0, 004a7a3d]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004a79f0(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004a79f0(CFlies *this_ptr,uint flags)

{
  CFlies *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFliesTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
