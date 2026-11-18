// Name: core_flies.cpp_CFlies_dtor_FUN_004ae710
// Address: 004ae710
// Address Range: [[004ae710, 004ae75d]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004ae710(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004ae710(CFlies *this_ptr,uint flags)

{
  CFlies *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFliesTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
