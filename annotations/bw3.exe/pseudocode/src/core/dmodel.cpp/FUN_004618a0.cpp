// Name: core_dmodel.cpp_FUN_004618a0
// Address: 004618a0
// Address Range: [[004618a0, 00461dfe]]
// Convention: unknown
// Signature: float core_dmodel_cpp_FUN_004618a0(CKeyFramedModel *param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dmodel_cpp_FUN_004618a0(CKeyFramedModel *param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  CMatrix3x3f *pCVar1;
  CVector3i *pCVar2;
  CDemonTriangle *pCVar3;
  byte bVar4;
  float afStackY_10c8 [992];
  float *pfVar5;
  CDemonTriangle local_118;
  float local_e0;
  float local_dc [5];
  float local_c8 [3];
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  uint local_a4;
  float afStack_a0 [5];
  float local_8c;
  CVector3f local_80;
  float local_74;
  float local_70 [2];
  CVector3f local_68;
  uint local_5c;
  float afStack_58 [4];
  float local_48;
  float local_44;
  CMatrix3x3f *local_3c;
  CMatrix3x3f *local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if (param_1->frame_count <= param_2) {
    param_2 = param_1->frame_count + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_18 = (float)core_box_cpp_FUN_0041e220(param_1->frame_bounds + param_2,param_3,param_4,0);
  if ((0.0 <= local_18) && (local_18 <= 1.0)) {
    local_44 = 2.0;
    if (param_1->collision_triangle_list == (CDemonTriangle *)0x0) {
      local_28 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(param_1,param_2);
      local_34 = 0;
      if (0 < param_1->poly_count) {
        local_30 = 0;
        do {
          local_24 = (int)&(((SMRGLPrimitiveQuad *)(param_1->poly_vert_list->vertices + -2))->base).
                           base.type + local_30;
          pCVar2 = local_28 + *(int *)(local_24 + 0x18);
          local_b0.x = (float)pCVar2->x * _DAT_005de564;
          local_b0.y = (float)pCVar2->y * _DAT_005de564;
          local_b0.z = (float)pCVar2->z * _DAT_005de564;
          pCVar2 = local_28 + *(int *)(local_24 + 0x24);
          local_80.x = (float)pCVar2->x * _DAT_005de564;
          local_80.y = (float)pCVar2->y * _DAT_005de564;
          local_80.z = (float)pCVar2->z * _DAT_005de564;
          local_20 = 2;
          if (2 < *(int *)(local_24 + 4)) {
            local_1c = local_24 + 0x18;
            do {
              pCVar2 = local_28 + *(int *)(local_1c + 0x18);
              local_68.x = (float)pCVar2->x * _DAT_005de564;
              local_68.y = (float)pCVar2->y * _DAT_005de564;
              local_68.z = (float)pCVar2->z * _DAT_005de564;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                        (&local_118,&local_b0,&local_80,&local_68);
              if (&local_80 != &local_68) {
                local_80.x = local_68.x;
                local_80.y = local_68.y;
                local_80.z = local_68.z;
              }
              local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                                          (&local_118,param_3,param_4);
              if (((local_18 <= local_44) && (0.0 <= local_18)) &&
                 ((local_18 <= 1.0 && (local_44 = local_18, param_5 != (float *)0x0)))) {
                local_70[0] = -local_118.normal.y;
                local_70[1] = -local_118.normal.z;
                local_74 = -local_118.normal.x;
                local_e0 = -local_118.normal.x;
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
        } while (local_34 < param_1->poly_count);
      }
    }
    else {
      local_3c = &param_1->rotation_matrix_workspace;
      core_dirmat_cpp_FUN_0045b870(local_3c,param_3);
      local_dc[2] = (float)local_5c;
      local_dc[(uint)bVar4 * -2 + 3] = afStack_58[(uint)bVar4 * -2];
      local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_dirmat_cpp_FUN_0045b870(local_3c,param_4);
      local_a4 = afStack_a0[2];
      afStack_a0[(uint)bVar4 * -2] = afStack_a0[(uint)bVar4 * -2 + 3];
      afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      pCVar3 = param_1->collision_triangle_list + param_2 * param_1->collision_triangle_count;
      local_2c = 0;
      if (0 < param_1->collision_triangle_count) {
        local_38 = local_3c;
        do {
          local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                                      (pCVar3,local_dc + 2,&local_a4);
          pCVar1 = local_38;
          if ((((local_18 <= local_44) && (0.0 <= local_18)) && (local_18 <= 1.0)) &&
             (local_44 = local_18, param_5 != (float *)0x0)) {
            afStack_58[2] = -(pCVar3->normal).x;
            pfVar5 = local_dc + 5;
            afStack_58[3] = -(pCVar3->normal).y;
            local_48 = -(pCVar3->normal).z;
            local_c8[0] = afStack_58[2];
            local_dc[(uint)bVar4 * -2 + 6] = afStack_58[(uint)bVar4 * -2 + 3];
            local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            core_dirmat_cpp_FUN_0045b800(pCVar1,pfVar5);
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
          pCVar3 = pCVar3 + 1;
        } while (local_2c < param_1->collision_triangle_count);
      }
    }
    return local_44;
  }
  return 2.0;
}
