// Name: core_boxactor.cpp_FUN_0041fa90
// Address: 0041fa90
// Address Range: [[0041fa90, 0041faf4]]
// Convention: unknown
// Signature: int core_boxactor_cpp_FUN_0041fa90(int param_1,byte param_2)

#include "nocturne.h"

int core_boxactor_cpp_FUN_0041fa90(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CBoxActorTypeInfo_0059acd0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(param_1 + 0x38c,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x38c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
