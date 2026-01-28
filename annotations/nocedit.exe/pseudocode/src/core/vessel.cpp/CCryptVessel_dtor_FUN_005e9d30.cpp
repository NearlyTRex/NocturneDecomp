// Name: core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30
// Address: 005e9d30
// Address Range: [[005e9d30, 005e9d94]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CCryptVessel * __cdecl
core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonActor *pCVar1;
  CCryptVessel *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCryptVesselTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(this_ptr->unk3 + 4),1);
  ptr = (CCryptVessel *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-3].orient_matrix.m[0].z,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
