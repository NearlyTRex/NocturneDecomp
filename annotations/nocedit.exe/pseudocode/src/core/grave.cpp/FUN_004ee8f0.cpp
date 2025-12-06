// Name: core_grave.cpp_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee9c4]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee8f0()

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004ee8f0(uint param_1, uint param_2)
    */

CVector3f *
core_grave_cpp_FUN_004ee8f0
          (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
          CVector3f *param_6)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    dVar3 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */(g_CDemonMissionPtr,
                                        (CKeyFramedModelInstance *)(param_5 + 0x158)));
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84 /* extract 2-byte value */(dVar3,0));
    pCVar2 = pCVar1->frame_bounds + unaff_EBX * 2;
    if (param_6 != pCVar2) {
      param_6->x = pCVar2->x;
      param_6->y = pCVar2->y;
      param_6->z = pCVar2->z;
    }
    if (param_6 + 1 != pCVar2 + 1) {
      param_6[1].x = pCVar2[1].x;
      param_6[1].y = pCVar2[1].y;
      param_6[1].z = pCVar2[1].z;
      return param_6;
    }
  }
  else {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(param_5 + 0x158));
    if (param_6 != &pCVar1->bounds_min) {
      param_6->x = (pCVar1->bounds_min).x;
      param_6->y = (pCVar1->bounds_min).y;
      param_6->z = (pCVar1->bounds_min).z;
    }
    if (param_6 + 1 != &pCVar1->bounds_max) {
      param_6[1].x = (pCVar1->bounds_max).x;
      param_6[1].y = (pCVar1->bounds_max).y;
      param_6[1].z = (pCVar1->bounds_max).z;
    }
  }
  return param_6;
}
