// Name: core_simbox.cpp_CSimBox_dtor_FUN_005170d0
// Address: 005170d0
// Address Range: [[005170d0, 00517134]]
// Convention: unknown
// Signature: CDemonActor * core_simbox_cpp_CSimBox_dtor_FUN_005170d0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_simbox_cpp_CSimBox_dtor_FUN_005170d0(CDemonActor *param_1,byte param_2)

{
  CBox *pCVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CSimBoxTypeInfo_005a1e50);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0((CBox *)(param_1[2].create_event + 0x38),0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)&pCVar1[-2].scrape_points[3].transformed_position.y,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
