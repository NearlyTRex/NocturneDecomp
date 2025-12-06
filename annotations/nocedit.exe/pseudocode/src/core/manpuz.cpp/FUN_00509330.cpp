// Name: core_manpuz.cpp_FUN_00509330
// Address: 00509330
// Address Range: [[00509330, 0050971c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509330()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_00509330(uint param_1, uint
   param_2, uint param_3, uint param_4) */

float core_manpuz_cpp_FUN_00509330
                (uint param_1,uint param_2,float unaff_EBX,uint param_4,
                int param_5,CVector3f *param_6,CVector3f *param_7,CVector3f *param_8)

{
  CKeyFramedModel *pCVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CMatrix3x3f *pCVar6;
  float unaff_EDI;
  CDemonTriangle *triangle;
  byte local_c0 [12];
  float local_b4;
  CVector3f local_b0;
  byte local_9c [12];
  CVector3f local_90;
  CVector3f CStack_80;
  byte local_6c [8];
  byte auStack_64 [16];
  byte local_54 [20];
  byte local_40 [8];
  float fStack_38;
  byte auStack_34 [8];
  float local_2c;
  int *local_28;
  int local_24;
  int local_1c;
  int local_18;
  float fStack_14;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(param_5 + 0x158));
  local_c0._0_4_ = (pCVar1->bounds_min).z;
  local_c0._4_4_ = (pCVar1->bounds_max).x;
  local_c0._8_4_ = (pCVar1->bounds_max).y;
  local_b4 = (pCVar1->bounds_max).z;
  local_24 = param_5 + 0xaa0;
  local_18 = 0x3f8147ae;
  local_28 = (int *)(param_5 + 0x5f0);
  local_1c = 0;
  do {
    if (*local_28 != 0) {
      local_b0.x = param_6->x - (float)local_28[3];
      local_b0.y = param_6->y - (float)local_28[4];
      local_b0.z = param_6->z - (float)local_28[5];
      pCVar6 = (CMatrix3x3f *)(local_28 + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)(local_6c + 4),&local_b0);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)auStack_34,param_7);
      fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        ((CBoundingBox3D *)local_c0,(CVector3f *)(auStack_64 + 4),
                         (CVector3f *)(auStack_34 + 4),(CVector3f *)local_9c);
      if ((0.0 <= fVar2) && (fVar2 < unaff_EDI)) {
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar6,&CStack_80,(CVector3f *)(local_9c + 4));
        unaff_EDI = fVar2;
        if (param_8 != pCVar4) {
          param_8->x = pCVar4->x;
          param_8->y = pCVar4->y;
          param_8->z = pCVar4->z;
        }
      }
    }
    local_2c = (float)(local_24 + local_1c);
    iVar5 = 0;
    do {
      triangle = (CDemonTriangle *)((int)local_2c + 0x3c + iVar5);
      fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(triangle,param_6,param_7);
      if ((0.0 <= fVar2) && (fVar2 < fStack_14)) {
        local_40._0_4_ = -(triangle->normal).x;
        local_40._4_4_ = -(triangle->normal).y;
        fStack_38 = -(triangle->normal).z;
        fStack_14 = fVar2;
        if (param_8 != (CVector3f *)local_40) {
          param_8->x = (float)local_40._0_4_;
          param_8->y = (float)local_40._4_4_;
          param_8->z = fStack_38;
        }
      }
      iVar5 = iVar5 + 0x38;
    } while (iVar5 != 0x70);
    local_18 = local_18 + 0xb8;
    local_24 = local_24 + 100;
  } while (local_18 != 0x8a0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(param_5 + 0x450));
  if ((CVector3f *)local_c0 != &pCVar1->bounds_min) {
    local_c0._0_4_ = (pCVar1->bounds_min).x;
    local_c0._4_4_ = (pCVar1->bounds_min).y;
    local_c0._8_4_ = (pCVar1->bounds_min).z;
  }
  if ((CVector3f *)&local_b4 != &pCVar1->bounds_max) {
    local_b4 = (pCVar1->bounds_max).x;
    local_b0.x = (pCVar1->bounds_max).y;
    local_b0.y = (pCVar1->bounds_max).z;
  }
  iVar5 = param_5 + 0x1340;
  local_18 = param_5 + 0x1400;
  do {
    if (0.0 < *(float *)(iVar5 + 0x18)) {
      local_90.x = param_6->x - *(float *)(iVar5 + 0x1c);
      local_90.y = param_6->y - *(float *)(iVar5 + 0x20);
      local_90.z = param_6->z - *(float *)(iVar5 + 0x24);
      pCVar6 = (CMatrix3x3f *)(iVar5 + 0x34);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)local_54,&local_90);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)(local_6c + 4),param_7);
      fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        ((CBoundingBox3D *)(local_c0 + 8),(CVector3f *)(local_54 + 8),
                         (CVector3f *)auStack_64,(CVector3f *)local_40);
      local_c0._8_4_ = fVar3;
      if ((0.0 <= fVar3) && (fVar3 < unaff_EBX)) {
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar6,(CVector3f *)local_6c,(CVector3f *)(local_40 + 4));
        unaff_EBX = fVar3;
        if (param_8 != pCVar4) {
          param_8->x = pCVar4->x;
          param_8->y = pCVar4->y;
          param_8->z = pCVar4->z;
        }
      }
    }
    iVar5 = iVar5 + 0x60;
  } while (iVar5 != local_18);
  return fVar2;
}
