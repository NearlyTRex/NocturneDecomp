// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
// Address: 004c9e50
// Address Range: [[004c9e50, 004ca23c]]
// Convention: unknown
// Signature: float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

#include "nocturne.h"

float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CMatrix3x3f *pCVar4;
  CDemonTriangle *triangle;
  CBoundingBox3D local_cc;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  local_cc.min.x = (pCVar1->bounds).min.x;
  local_cc.min.y = (pCVar1->bounds).min.y;
  local_cc.min.z = (pCVar1->bounds).min.z;
  local_cc.max.x = (pCVar1->bounds).max.x;
  local_cc.max.y = (pCVar1->bounds).max.y;
  local_cc.max.z = (pCVar1->bounds).max.z;
  local_28 = param_1 + 0xa98;
  local_1c = 1.01;
  local_2c = (int *)(param_1 + 0x5e8);
  local_20 = 0;
  do {
    if (*local_2c != 0) {
      local_b4.x = param_2->x - (float)local_2c[3];
      local_b4.y = param_2->y - (float)local_2c[4];
      local_b4.z = param_2->z - (float)local_2c[5];
      pCVar4 = (CMatrix3x3f *)(local_2c + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar4,&local_6c,&local_b4);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar4,&local_3c,param_3);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                           (&local_cc,&local_6c,&local_3c,&local_a8);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (pCVar4,&local_90,&local_a8);
        if (param_4 != pCVar2) {
          param_4->x = pCVar2->x;
          param_4->y = pCVar2->y;
          param_4->z = pCVar2->z;
        }
      }
    }
    local_30 = local_28 + local_20;
    iVar3 = 0;
    do {
      triangle = (CDemonTriangle *)(local_30 + 0x3c + iVar3);
      local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(triangle,param_2,param_3);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_48.x = -(triangle->normal).x;
        local_48.y = -(triangle->normal).y;
        local_48.z = -(triangle->normal).z;
        local_1c = local_18;
        if (param_4 != &local_48) {
          param_4->x = local_48.x;
          param_4->y = local_48.y;
          param_4->z = local_48.z;
        }
      }
      iVar3 = iVar3 + 0x38;
    } while (iVar3 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 0x19;
  } while (local_20 != 0x8a0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x448));
  if (&local_cc != &pCVar1->bounds) {
    local_cc.min.x = (pCVar1->bounds).min.x;
    local_cc.min.y = (pCVar1->bounds).min.y;
    local_cc.min.z = (pCVar1->bounds).min.z;
  }
  pCVar2 = &(pCVar1->bounds).max;
  if (&local_cc.max != pCVar2) {
    local_cc.max.x = pCVar2->x;
    local_cc.max.y = (pCVar1->bounds).max.y;
    local_cc.max.z = (pCVar1->bounds).max.z;
  }
  iVar3 = param_1 + 0x1338;
  local_24 = param_1 + 0x13f8;
  do {
    if (0.0 < *(float *)(iVar3 + 0x18)) {
      local_9c.x = param_2->x - *(float *)(iVar3 + 0x1c);
      local_9c.y = param_2->y - *(float *)(iVar3 + 0x20);
      local_9c.z = param_2->z - *(float *)(iVar3 + 0x24);
      pCVar4 = (CMatrix3x3f *)(iVar3 + 0x34);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar4,&local_60,&local_9c);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar4,&local_78,param_3);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                           (&local_cc,&local_60,&local_78,&local_54);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (pCVar4,&local_84,&local_54);
        if (param_4 != pCVar2) {
          param_4->x = pCVar2->x;
          param_4->y = pCVar2->y;
          param_4->z = pCVar2->z;
        }
      }
    }
    iVar3 = iVar3 + 0x60;
  } while (iVar3 != local_24);
  return local_1c;
}
