// Name: core_frankgen.cpp_FUN_00495430
// Address: 00495430
// Address Range: [[00495430, 00495494]]
// Convention: unknown
// Signature: CDemonActor * core_frankgen_cpp_FUN_00495430(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_frankgen_cpp_FUN_00495430(CDemonActor *param_1,byte param_2)

{
  CDemonTriangle *pCVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CFrankenstienMachineTypeInfo_0059dc60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&param_1[2].orient_matrix.m[2].y,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0xe].vertex3,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
