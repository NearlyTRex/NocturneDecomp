// Name: core_curtain.cpp_FUN_0043f8e0
// Address: 0043f8e0
// Address Range: [[0043f8e0, 0043f944]]
// Convention: unknown
// Signature: int core_curtain_cpp_FUN_0043f8e0(int param_1,byte param_2)

#include "nocturne.h"

int core_curtain_cpp_FUN_0043f8e0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CCurtainTypeInfo_0059bdb0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_curtain_cpp_FUN_0043f980(param_1 + 0x200,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x200,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
