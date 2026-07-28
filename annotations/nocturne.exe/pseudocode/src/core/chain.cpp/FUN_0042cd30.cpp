// Name: core_chain.cpp_FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd94]]
// Convention: unknown
// Signature: CDemonActor * core_chain_cpp_FUN_0042cd30(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_chain_cpp_FUN_0042cd30(CDemonActor *param_1,byte param_2)

{
  int iVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CChainTypeInfo_0059b340);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  iVar1 = core_chain_cpp_FUN_0042cdc0(&param_1[1].previous_transform_state.orientation,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x284),1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
