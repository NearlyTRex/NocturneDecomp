// Name: core_chain.cpp_FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd94]]
// Convention: unknown
// Signature: int core_chain_cpp_FUN_0042cd30(int param_1,byte param_2)

#include "nocturne.h"

int core_chain_cpp_FUN_0042cd30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CChainTypeInfo_0059b340);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_chain_cpp_FUN_0042cdc0(param_1 + 0x284,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x284,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
