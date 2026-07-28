// Name: core_vehicle.cpp_FUN_0054f7f0
// Address: 0054f7f0
// Address Range: [[0054f7f0, 0054f864]]
// Convention: unknown
// Signature: CDemonActor * core_vehicle_cpp_FUN_0054f7f0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_vehicle_cpp_FUN_0054f7f0(CDemonActor *param_1,byte param_2)

{
  CDemonTriangle *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CVehicleTypeInfo_005a3d40);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&param_1[0xc].orient_matrix.m[2].y,0);
  iVar2 = core_vehicle_cpp_FUN_0054f8a0(&pCVar1[-0x20].vertex3.y,0);
  pCVar3 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar2 + -0x934),1);
  if ((param_2 & 2) == 0) {
    return pCVar3;
  }
  FUN_00564494(pCVar3);
  return pCVar3;
}
