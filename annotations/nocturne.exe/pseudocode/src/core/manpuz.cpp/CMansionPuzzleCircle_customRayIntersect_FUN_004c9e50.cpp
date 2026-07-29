// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
// Address: 004c9e50
// Address Range: [[004c9e50, 004ca23c]]
// Convention: unknown
// Signature: float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

#include "nocturne.h"

float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

{
  char *pcVar1;
  int *piVar2;
  CKeyFramedModel *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  CMatrix3x3f *pCVar6;
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
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  local_cc.min.x = (float)pCVar3->texture_list[7].textures[1].base.count;
  local_cc.min.y = *(float *)pCVar3->texture_list[7].textures[1].texture_name;
  local_cc.min.z = *(float *)(pCVar3->texture_list[7].textures[1].texture_name + 4);
  local_cc.max.x = *(float *)(pCVar3->texture_list[7].textures[1].texture_name + 8);
  local_cc.max.y = *(float *)(pCVar3->texture_list[7].textures[1].texture_name + 0xc);
  local_cc.max.z = (float)pCVar3->texture_list[7].textures[2].base.type;
  local_28 = param_1 + 0xa98;
  local_1c = 1.01;
  local_2c = (int *)(param_1 + 0x5e8);
  local_20 = 0;
  do {
    if (*local_2c != 0) {
      local_b4.x = param_2->x - (float)local_2c[3];
      local_b4.y = param_2->y - (float)local_2c[4];
      local_b4.z = param_2->z - (float)local_2c[5];
      pCVar6 = (CMatrix3x3f *)(local_2c + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar6,&local_6c,&local_b4);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar6,&local_3c,param_3);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                           (&local_cc,&local_6c,&local_3c,&local_a8);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (pCVar6,&local_90,&local_a8);
        if (param_4 != pCVar4) {
          param_4->x = pCVar4->x;
          param_4->y = pCVar4->y;
          param_4->z = pCVar4->z;
        }
      }
    }
    local_30 = local_28 + local_20;
    iVar5 = 0;
    do {
      triangle = (CDemonTriangle *)(local_30 + 0x3c + iVar5);
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
      iVar5 = iVar5 + 0x38;
    } while (iVar5 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 0x19;
  } while (local_20 != 0x8a0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x448));
  piVar2 = &pCVar3->texture_list[7].textures[1].base.count;
  if (&local_cc != (CBoundingBox3D *)piVar2) {
    local_cc.min.x = (float)*piVar2;
    local_cc.min.y = *(float *)pCVar3->texture_list[7].textures[1].texture_name;
    local_cc.min.z = *(float *)(pCVar3->texture_list[7].textures[1].texture_name + 4);
  }
  pcVar1 = pCVar3->texture_list[7].textures[1].texture_name + 8;
  if (&local_cc.max != (CVector3f *)pcVar1) {
    local_cc.max.x = *(float *)pcVar1;
    local_cc.max.y = *(float *)(pCVar3->texture_list[7].textures[1].texture_name + 0xc);
    local_cc.max.z = (float)pCVar3->texture_list[7].textures[2].base.type;
  }
  iVar5 = param_1 + 0x1338;
  local_24 = param_1 + 0x13f8;
  do {
    if (0.0 < *(float *)(iVar5 + 0x18)) {
      local_9c.x = param_2->x - *(float *)(iVar5 + 0x1c);
      local_9c.y = param_2->y - *(float *)(iVar5 + 0x20);
      local_9c.z = param_2->z - *(float *)(iVar5 + 0x24);
      pCVar6 = (CMatrix3x3f *)(iVar5 + 0x34);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar6,&local_60,&local_9c);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pCVar6,&local_78,param_3);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                           (&local_cc,&local_60,&local_78,&local_54);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (pCVar6,&local_84,&local_54);
        if (param_4 != pCVar4) {
          param_4->x = pCVar4->x;
          param_4->y = pCVar4->y;
          param_4->z = pCVar4->z;
        }
      }
    }
    iVar5 = iVar5 + 0x60;
  } while (iVar5 != local_24);
  return local_1c;
}
