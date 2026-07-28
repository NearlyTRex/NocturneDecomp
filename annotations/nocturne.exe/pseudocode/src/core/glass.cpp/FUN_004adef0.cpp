// Name: core_glass.cpp_FUN_004adef0
// Address: 004adef0
// Address Range: [[004adef0, 004adf64]]
// Convention: unknown
// Signature: CDemonActor * core_glass_cpp_FUN_004adef0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_glass_cpp_FUN_004adef0(CDemonActor *param_1,byte param_2)

{
  CVector3f *pCVar1;
  CMirror *pCVar2;
  CDemonActor *pCVar3;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CGlassTypeInfo_0059e490);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_glass_cpp_CVector3f_arrdtor_FUN_004adf70
                     ((CVector3f *)&param_1[2].platform_position_delta.y,0);
  pCVar2 = core_mirror_cpp_CMirror_dtor_FUN_004d6570((CMirror *)&pCVar1[-0x23].y,0);
  pCVar3 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)&pCVar2[-2].reflection.mirror_transform_matrix.m[2].z,1);
  if ((param_2 & 2) == 0) {
    return pCVar3;
  }
  FUN_00564494(pCVar3);
  return pCVar3;
}
