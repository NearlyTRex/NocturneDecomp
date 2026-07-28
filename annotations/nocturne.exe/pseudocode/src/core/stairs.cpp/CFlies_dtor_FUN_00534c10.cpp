// Name: core_stairs.cpp_CFlies_dtor_FUN_00534c10
// Address: 00534c10
// Address Range: [[00534c10, 00534c74]]
// Convention: unknown
// Signature: CDemonActor * core_stairs_cpp_CFlies_dtor_FUN_00534c10(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_stairs_cpp_CFlies_dtor_FUN_00534c10(CDemonActor *param_1,byte param_2)

{
  SFly *pSVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CStairsTypeInfo_005a2590);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pSVar1 = core_stairs_cpp_SFly_arrdtor_FUN_00534c80((SFly *)(param_1[1].actor_name + 0x18),0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)pSVar1[-7].control_points,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
