// Name: core_vessel.cpp_FUN_005506c0
// Address: 005506c0
// Address Range: [[005506c0, 00550724]]
// Convention: unknown
// Signature: CDemonActor * core_vessel_cpp_FUN_005506c0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_vessel_cpp_FUN_005506c0(CDemonActor *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CCryptVesselTypeInfo_005a3e60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)param_1[2].footstep_sound_code,1);
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)((int)&pCVar1[-3].orient + 4),1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
