// Name: core_crate.cpp_CCrate_dtor_FUN_0043a410
// Address: 0043a410
// Address Range: [[0043a410, 0043a45d]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_0043a410(CCrate *this_ptr,uint flags)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_0043a410(CCrate *this_ptr,uint flags)

{
  CCrate *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCrateTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
