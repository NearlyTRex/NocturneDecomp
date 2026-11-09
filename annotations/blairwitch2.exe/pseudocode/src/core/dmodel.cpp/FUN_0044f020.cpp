// Name: core_dmodel.cpp_FUN_0044f020
// Address: 0044f020
// Address Range: [[0044f020, 0044f57e]]
// Convention: unknown
// Signature: float core_dmodel_cpp_FUN_0044f020(CKeyFramedModel *param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dmodel_cpp_FUN_0044f020(CKeyFramedModel *param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  byte *puVar1;
  CVector3i *pCVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10c8 [992];
  float *pfVar5;
  byte local_118 [40];
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc [5];
  float local_c8 [3];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float afStack_a0 [5];
  float local_8c;
  byte local_80 [8];
  float local_78;
  float local_74;
  float local_70 [2];
  byte local_68 [8];
  float local_60;
  uint local_5c;
  float afStack_58 [4];
  float local_48;
  float local_44;
  byte *local_3c;
  byte *local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x100 <= param_2) {
    param_2 = *(int *)&param_1->field_0x100 + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_18 = (float)core_box_cpp_FUN_0041af70
                              (param_2 * 0x18 + *(int *)&param_1->field_0x350,param_3,param_4,0);
  if ((0.0 <= local_18) && (local_18 <= 1.0)) {
    local_44 = 2.0;
    if (*(int *)&param_1->field_0x358 == 0) {
      local_28 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(param_1,param_2);
      local_34 = 0;
      if (0 < *(int *)&param_1->field_0x110) {
        local_30 = 0;
        do {
          local_24 = local_30 + *(int *)&param_1->field_0x114;
          pCVar2 = local_28 + *(int *)(local_24 + 0x18) * 0xc;
          local_b0 = (float)*(int *)pCVar2 * _DAT_005f50c4;
          local_ac = (float)*(int *)(pCVar2 + 4) * _DAT_005f50c4;
          local_a8 = (float)*(int *)(pCVar2 + 8) * _DAT_005f50c4;
          pCVar2 = local_28 + *(int *)(local_24 + 0x24) * 0xc;
          local_80._0_4_ = (float)*(int *)pCVar2 * _DAT_005f50c4;
          local_80._4_4_ = (float)*(int *)(pCVar2 + 4) * _DAT_005f50c4;
          local_78 = (float)*(int *)(pCVar2 + 8) * _DAT_005f50c4;
          local_20 = 2;
          if (2 < *(int *)(local_24 + 4)) {
            local_1c = local_24 + 0x18;
            do {
              pCVar2 = local_28 + *(int *)(local_1c + 0x18) * 0xc;
              local_68._0_4_ = (float)*(int *)pCVar2 * _DAT_005f50c4;
              local_68._4_4_ = (float)*(int *)(pCVar2 + 4) * _DAT_005f50c4;
              local_60 = (float)*(int *)(pCVar2 + 8) * _DAT_005f50c4;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                        ((CDemonTriangle *)local_118,(CVector3f *)&local_b0,(CVector3f *)local_80,
                         (CVector3f *)local_68);
              if (local_80 != local_68) {
                local_80._0_4_ = local_68._0_4_;
                local_80._4_4_ = local_68._4_4_;
                local_78 = local_60;
              }
              local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                          (local_118,param_3,param_4);
              if (((local_18 <= local_44) && (0.0 <= local_18)) &&
                 ((local_18 <= 1.0 && (local_44 = local_18, param_5 != (float *)0x0)))) {
                local_70[0] = -local_f0;
                local_70[1] = -local_ec;
                local_74 = -(float)local_118._36_4_;
                local_e0 = -(float)local_118._36_4_;
                local_dc[(uint)bVar4 * -2] = local_70[(uint)bVar4 * -2];
                local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                     local_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
                if (&local_e0 != param_5) {
                  *param_5 = local_e0;
                  param_5[1] = local_dc[0];
                  param_5[2] = local_dc[1];
                }
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + 0xc;
            } while (local_20 < *(int *)(local_24 + 4));
          }
          local_30 = local_30 + 0x48;
          local_34 = local_34 + 1;
        } while (local_34 < *(int *)&param_1->field_0x110);
      }
    }
    else {
      local_3c = &param_1->field_0x370;
      core_dirmat_cpp_FUN_004495a0(local_3c,param_3);
      local_dc[2] = (float)local_5c;
      local_dc[(uint)bVar4 * -2 + 3] = afStack_58[(uint)bVar4 * -2];
      local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_dirmat_cpp_FUN_004495a0(local_3c,param_4);
      local_a4 = afStack_a0[2];
      afStack_a0[(uint)bVar4 * -2] = afStack_a0[(uint)bVar4 * -2 + 3];
      afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      iVar3 = param_2 * *(int *)&param_1->field_0x354 * 0x38 + *(int *)&param_1->field_0x358;
      local_2c = 0;
      if (0 < *(int *)&param_1->field_0x354) {
        local_38 = local_3c;
        do {
          local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                      (iVar3,local_dc + 2,&local_a4);
          puVar1 = local_38;
          if ((((local_18 <= local_44) && (0.0 <= local_18)) && (local_18 <= 1.0)) &&
             (local_44 = local_18, param_5 != (float *)0x0)) {
            pfVar5 = local_dc + 5;
            afStack_58[2] = -*(float *)(iVar3 + 0x24);
            afStack_58[3] = -*(float *)(iVar3 + 0x28);
            local_48 = -*(float *)(iVar3 + 0x2c);
            local_c8[0] = -*(float *)(iVar3 + 0x24);
            local_dc[(uint)bVar4 * -2 + 6] = afStack_58[(uint)bVar4 * -2 + 3];
            local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            core_dirmat_cpp_FUN_00449530(puVar1,pfVar5);
            local_bc = local_8c;
            local_dc[(uint)bVar4 * -2 + 9] = afStack_a0[(uint)bVar4 * -2 + 6];
            local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                 afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
            if (local_dc + 8 != param_5) {
              *param_5 = local_bc;
              param_5[1] = local_b8;
              param_5[2] = local_b4;
            }
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + 0x38;
        } while (local_2c < *(int *)&param_1->field_0x354);
      }
    }
    return local_44;
  }
  return 2.0;
}
