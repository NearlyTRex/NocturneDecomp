// Name: core_vessel.cpp_CCryptVessel_dtor_FUN_005506c0
// Address: 005506c0
// Address Range: [[005506c0, 00550724]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005506c0(CCryptVessel *this_ptr,uint flags)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005506c0(CCryptVessel *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCryptVessel *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCryptVesselTypeInfo_005a3e60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&(this_ptr->flame).base,1);
  pCVar2 = (CCryptVessel *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)((int)&pCVar1[-3].orient + 4),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
