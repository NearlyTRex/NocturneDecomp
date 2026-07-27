// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20
// Address: 004cbe20
// Address Range: [[004cbe20, 004cbea4]]
// Convention: unknown
// Signature: int core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(int param_1,byte param_2)

#include "nocturne.h"

int core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CMansionPuzzleCircleTypeInfo_005a0290)
    ;
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_manpuz_cpp_FUN_004cc060(param_1 + 0x1338,0);
  iVar1 = core_manpuz_cpp_FUN_004cc040(iVar1 + -0x8a0,0);
  iVar1 = core_manpuz_cpp_FUN_004cc020(iVar1 + -0x4b0,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x5e8,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
