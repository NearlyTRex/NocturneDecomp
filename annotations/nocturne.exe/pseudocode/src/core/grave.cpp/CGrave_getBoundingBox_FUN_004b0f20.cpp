// Name: core_grave.cpp_CGrave_getBoundingBox_FUN_004b0f20
// Address: 004b0f20
// Address Range: [[004b0f20, 004b0ff4]]
// Convention: unknown
// Signature: CBoundingBox3D * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,CBoundingBox3D *param_2)

#include "nocturne.h"

CBoundingBox3D * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,CBoundingBox3D *param_2)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  CBoundingBox3D *pCVar3;
  double dVar4;
  int iVar5;
  
  if (g_CDemonMission_PTR_005baf90->is_in_editor == 0) {
    dVar4 = round((double)*(float *)(param_1 + 0x2cc));
    iVar5 = (int)ROUND(dVar4);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x150));
    pCVar3 = pCVar2->frame_bounds + iVar5;
    if (param_2 != pCVar3) {
      (param_2->min).x = (pCVar3->min).x;
      (param_2->min).y = (pCVar3->min).y;
      (param_2->min).z = (pCVar3->min).z;
    }
    if (&param_2->max != &pCVar3->max) {
      (param_2->max).x = (pCVar3->max).x;
      (param_2->max).y = (pCVar3->max).y;
      (param_2->max).z = (pCVar3->max).z;
      return param_2;
    }
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x150));
    if (param_2 != &pCVar2->bounds) {
      (param_2->min).x = (pCVar2->bounds).min.x;
      (param_2->min).y = (pCVar2->bounds).min.y;
      (param_2->min).z = (pCVar2->bounds).min.z;
    }
    pCVar1 = &(pCVar2->bounds).max;
    if (&param_2->max != pCVar1) {
      (param_2->max).x = pCVar1->x;
      (param_2->max).y = (pCVar2->bounds).max.y;
      (param_2->max).z = (pCVar2->bounds).max.z;
    }
  }
  return param_2;
}
