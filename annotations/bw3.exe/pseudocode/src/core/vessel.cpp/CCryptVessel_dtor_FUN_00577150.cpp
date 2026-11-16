// Name: core_vessel.cpp_CCryptVessel_dtor_FUN_00577150
// Address: 00577150
// Address Range: [[00577150, 005771b4]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_00577150(CCryptVessel *this_ptr,uint flags)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_00577150(CCryptVessel *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCryptVessel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCryptVesselTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408770(&(this_ptr->flame).base,1);
  ptr = (CCryptVessel *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408770
                  ((CDemonActor *)&pCVar1[-3].orient_matrix.m[0].z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
