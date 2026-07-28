// Name: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990
// Address: 00453990
// Address Range: [[00453990, 00453e0a]]
// Convention: unknown
// Signature: float core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(CKeyFramedModel *param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(CKeyFramedModel *param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  CVector3i *pCVar1;
  float *pfVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  CDemonTriangle local_d0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  byte local_80 [12];
  byte local_74 [12];
  CVector3f local_68;
  CVector3f local_5c;
  byte local_50 [12];
  CVector3f local_44;
  CVector3i *local_38;
  float local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  if (param_1->frame_count <= param_2) {
    param_2 = param_1->frame_count + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_18 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                              (param_2 * 0x18 + param_1->texture_list[7].textures[2].base.count,
                               param_3,param_4,0);
  if ((local_18 < 0.0) || (1.0 < local_18)) {
    local_34 = 2.0;
  }
  else {
    local_20 = 2.0;
    if (*(int *)(param_1->texture_list[7].textures[2].texture_name + 4) == 0) {
      local_38 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(param_1,param_2);
      local_2c = 0;
      if (0 < param_1->poly_count) {
        local_28 = 0;
        do {
          local_24 = (int)&(((SMRGLPrimitiveQuad *)(param_1->poly_vert_list->vertices + -2))->base).
                           base.type + local_28;
          pCVar1 = local_38 + *(int *)(local_24 + 0x18);
          local_68.x = (float)pCVar1->x * _DAT_0059c064;
          local_68.y = (float)pCVar1->y * _DAT_0059c064;
          local_68.z = (float)pCVar1->z * _DAT_0059c064;
          pCVar1 = local_38 + *(int *)(local_24 + 0x24);
          local_5c.x = (float)pCVar1->x * _DAT_0059c064;
          local_5c.y = (float)pCVar1->y * _DAT_0059c064;
          local_5c.z = (float)pCVar1->z * _DAT_0059c064;
          iVar4 = 2;
          if (2 < *(int *)(local_24 + 4)) {
            local_1c = local_24 + 0x18;
            do {
              pCVar1 = local_38 + *(int *)(local_1c + 0x18);
              local_44.x = (float)pCVar1->x * _DAT_0059c064;
              local_44.y = (float)pCVar1->y * _DAT_0059c064;
              local_44.z = (float)pCVar1->z * _DAT_0059c064;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                        (&local_d0,&local_68,&local_5c,&local_44);
              if (&local_5c != &local_44) {
                local_5c.x = local_44.x;
                local_5c.y = local_44.y;
                local_5c.z = local_44.z;
              }
              local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                          (&local_d0,param_3,param_4);
              if (((local_18 <= local_20) && (0.0 <= local_18)) &&
                 ((local_18 <= 1.0 && (local_20 = local_18, param_5 != (float *)0x0)))) {
                local_98 = -local_d0.normal.x;
                local_94 = -local_d0.normal.y;
                local_90 = -local_d0.normal.z;
                if (param_5 != &local_98) {
                  *param_5 = local_98;
                  param_5[1] = local_94;
                  param_5[2] = local_90;
                }
              }
              local_1c = local_1c + 0xc;
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(local_24 + 4));
          }
          local_28 = local_28 + 0x48;
          local_2c = local_2c + 1;
        } while (local_2c < param_1->poly_count);
      }
    }
    else {
      pcVar3 = param_1->texture_list[8].textures[0].texture_name + 4;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pcVar3,local_80,param_3);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pcVar3,local_50,param_4);
      iVar4 = *(int *)(param_1->texture_list[7].textures[2].texture_name + 4) +
              param_2 * *(int *)param_1->texture_list[7].textures[2].texture_name * 0x38;
      iVar5 = 0;
      local_30 = pcVar3;
      if (0 < *(int *)param_1->texture_list[7].textures[2].texture_name) {
        do {
          local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                      (iVar4,local_80,local_50);
          if ((((local_18 <= local_20) && (0.0 <= local_18)) && (local_18 <= 1.0)) &&
             (local_20 = local_18, param_5 != (float *)0x0)) {
            local_8c = -*(float *)(iVar4 + 0x24);
            local_88 = -*(float *)(iVar4 + 0x28);
            local_84 = -*(float *)(iVar4 + 0x2c);
            pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                        (local_30,local_74,&local_8c);
            if (param_5 != pfVar2) {
              *param_5 = *pfVar2;
              param_5[1] = pfVar2[1];
              param_5[2] = pfVar2[2];
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x38;
        } while (iVar5 < *(int *)param_1->texture_list[7].textures[2].texture_name);
      }
    }
    local_34 = local_20;
  }
  return local_34;
}
