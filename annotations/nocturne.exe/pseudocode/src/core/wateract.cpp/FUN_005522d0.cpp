// Name: core_wateract.cpp_FUN_005522d0
// Address: 005522d0
// Address Range: [[005522d0, 00552334]]
// Convention: unknown
// Signature: CDemonActor * core_wateract_cpp_FUN_005522d0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_wateract_cpp_FUN_005522d0(CDemonActor *param_1,byte param_2)

{
  int iVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CWaterActorTypeInfo_005a3ff0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  iVar1 = core_wateract_cpp_FUN_00552360(&param_1[1].next_actor,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x294),1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
