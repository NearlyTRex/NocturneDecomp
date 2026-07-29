// Name: core_curtain.cpp_FUN_0043f8e0
// Address: 0043f8e0
// Address Range: [[0043f8e0, 0043f944]]
// Convention: unknown
// Signature: CDemonActor * core_curtain_cpp_FUN_0043f8e0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_curtain_cpp_FUN_0043f8e0(CDemonActor *param_1,byte param_2)

{
  SCurtainVertex *pSVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CCurtainTypeInfo_0059bdb0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pSVar1 = core_curtain_cpp_FUN_0043f980((SCurtainVertex *)(param_1[1].create_event + 0x38),0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pSVar1[-5].neighbor_count,1)
  ;
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
