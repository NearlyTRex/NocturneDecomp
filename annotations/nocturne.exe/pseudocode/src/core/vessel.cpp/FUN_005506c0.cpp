// Name: core_vessel.cpp_FUN_005506c0
// Address: 005506c0
// Address Range: [[005506c0, 00550724]]
// Convention: unknown
// Signature: int core_vessel_cpp_FUN_005506c0(int param_1,byte param_2)

#include "nocturne.h"

int core_vessel_cpp_FUN_005506c0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CCryptVesselTypeInfo_005a3e60);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1 + 0x3bc,1);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x3bc,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
