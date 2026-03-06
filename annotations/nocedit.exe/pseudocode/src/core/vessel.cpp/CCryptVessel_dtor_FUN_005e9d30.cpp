// Name: core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30
// Address: 005e9d30
// Address Range: [[005e9d30, 005e9d94]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel *this_ptr,uint flags)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel *this_ptr,uint flags)

{
  CCryptVessel_ptr_964 pCVar1;
  CCryptVessel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCryptVesselTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CCryptVessel_ptr_964)
           core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&(this_ptr->flame).base,1);
  ptr = (CCryptVessel *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pCVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
