// Name: core_crate.cpp_CCrate_dtor_FUN_004496c0
// Address: 004496c0
// Address Range: [[004496c0, 0044970d]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_004496c0(CCrate *this_ptr,uint flags)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_004496c0(CCrate *this_ptr,uint flags)

{
  CCrate *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCrateTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
