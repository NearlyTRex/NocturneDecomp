// Name: core_boxactor.cpp_CLightActor_dtor_FUN_0041fa10
// Address: 0041fa10
// Address Range: [[0041fa10, 0041fa84]]
// Convention: unknown
// Signature: CDemonActor * core_boxactor_cpp_CLightActor_dtor_FUN_0041fa10(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_boxactor_cpp_CLightActor_dtor_FUN_0041fa10(CDemonActor *param_1,byte param_2)

{
  int iVar1;
  CBox *pCVar2;
  CDemonActor *pCVar3;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CLightActorTypeInfo_0059acb0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  iVar1 = core_dlight_cpp_FUN_0044e1c0(&param_1[4].previous_transform_state,0);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_0041a6c0((CBox *)(iVar1 + -0x2dc),0);
  pCVar3 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)&pCVar2[-2].scrape_points[2].local_position.z,1);
  if ((param_2 & 2) == 0) {
    return pCVar3;
  }
  FUN_00564494(pCVar3);
  return pCVar3;
}
