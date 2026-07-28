// Name: core_flamecan.cpp_FUN_0048e8f0
// Address: 0048e8f0
// Address Range: [[0048e8f0, 0048e954]]
// Convention: unknown
// Signature: CDemonActor * core_flamecan_cpp_FUN_0048e8f0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_flamecan_cpp_FUN_0048e8f0(CDemonActor *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CFlameCanTypeInfo_0059d760);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(param_1[2].create_event + 0x20),1);
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar1[-3].create_event + 0x40),1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
