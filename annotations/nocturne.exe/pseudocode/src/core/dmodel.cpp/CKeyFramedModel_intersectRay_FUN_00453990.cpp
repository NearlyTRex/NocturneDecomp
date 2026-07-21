// Name: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990
// Address: 00453990
// Address Range: [[00453990, 00453e0a]]
// Convention: unknown
// Signature: float core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(int param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_d0 [36];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  byte local_80 [12];
  byte local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x100) <= param_2) {
    param_2 = *(int *)(param_1 + 0x100) + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_18 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                              (param_2 * 0x18 + *(int *)(param_1 + 0x350),param_3,param_4,0);
  if ((local_18 < 0.0) || (1.0 < local_18)) {
    local_34 = 2.0;
  }
  else {
    local_20 = 2.0;
    if (*(int *)(param_1 + 0x358) == 0) {
      local_38 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(param_1,param_2);
      local_2c = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        local_28 = 0;
        do {
          local_24 = local_28 + *(int *)(param_1 + 0x114);
          piVar1 = (int *)(*(int *)(local_24 + 0x18) * 0xc + local_38);
          local_68 = (float)*piVar1 * _DAT_0059c064;
          local_64 = (float)piVar1[1] * _DAT_0059c064;
          local_60 = (float)piVar1[2] * _DAT_0059c064;
          piVar1 = (int *)(*(int *)(local_24 + 0x24) * 0xc + local_38);
          local_5c = (float)*piVar1 * _DAT_0059c064;
          local_58 = (float)piVar1[1] * _DAT_0059c064;
          local_54 = (float)piVar1[2] * _DAT_0059c064;
          iVar4 = 2;
          if (2 < *(int *)(local_24 + 4)) {
            local_1c = local_24 + 0x18;
            do {
              piVar1 = (int *)(*(int *)(local_1c + 0x18) * 0xc + local_38);
              local_44 = (float)*piVar1 * _DAT_0059c064;
              local_40 = (float)piVar1[1] * _DAT_0059c064;
              local_3c = (float)piVar1[2] * _DAT_0059c064;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                        (local_d0,&local_68,&local_5c,&local_44);
              if (&local_5c != &local_44) {
                local_5c = local_44;
                local_58 = local_40;
                local_54 = local_3c;
              }
              local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                          (local_d0,param_3,param_4);
              if (((local_18 <= local_20) && (0.0 <= local_18)) &&
                 ((local_18 <= 1.0 && (local_20 = local_18, param_5 != (float *)0x0)))) {
                local_98 = -local_ac;
                local_94 = -local_a8;
                local_90 = -local_a4;
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
        } while (local_2c < *(int *)(param_1 + 0x110));
      }
    }
    else {
      iVar3 = param_1 + 0x370;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(iVar3,local_80,param_3);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(iVar3,local_50,param_4);
      iVar4 = *(int *)(param_1 + 0x358) + param_2 * *(int *)(param_1 + 0x354) * 0x38;
      iVar5 = 0;
      local_30 = iVar3;
      if (0 < *(int *)(param_1 + 0x354)) {
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
        } while (iVar5 < *(int *)(param_1 + 0x354));
      }
    }
    local_34 = local_20;
  }
  return local_34;
}
