// Name: core_vessel.cpp_CCryptVessel_dtor_FUN_00585cd0
// Address: 00585cd0
// Address Range: [[00585cd0, 00585d34]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_00585cd0(CCryptVessel *this_ptr,uint flags)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_00585cd0(CCryptVessel *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCryptVessel *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCryptVesselTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408930(&(this_ptr->flame).base,1);
  pCVar2 = (CCryptVessel *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar1[-2].orient_matrix.m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
