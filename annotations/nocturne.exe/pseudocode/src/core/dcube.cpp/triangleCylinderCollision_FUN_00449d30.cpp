// Name: core_dcube.cpp_triangleCylinderCollision_FUN_00449d30
// Address: 00449d30
// Address Range: [[00449d30, 0044a0e6]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00449d30(int *param_1,float *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00449d30(int *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  if ((float)param_1[4] <= (float)-0.34000000000000002) {
    fVar1 = *(float *)*param_1 - *param_2;
    fVar9 = *(float *)(*param_1 + 4);
    fVar2 = *(float *)(*param_1 + 8) - param_2[2];
    local_4c = *(float *)param_1[1] - *param_2;
    local_48 = *(float *)(param_1[1] + 4);
    local_44 = *(float *)(param_1[1] + 8) - param_2[2];
    local_40 = *(float *)param_1[2] - *param_2;
    local_3c = *(float *)(param_1[2] + 4);
    local_38 = *(float *)(param_1[2] + 8) - param_2[2];
    local_58 = fVar1;
    local_54 = fVar9;
    local_50 = fVar2;
    if (fVar9 < local_48) {
      if (&local_58 != &local_4c) {
        local_58 = local_4c;
        local_54 = local_48;
        local_50 = local_44;
      }
      local_70 = fVar1;
      local_6c = fVar9;
      local_68 = fVar2;
      if (&local_4c != &local_70) {
        local_4c = fVar1;
        local_48 = fVar9;
        local_44 = fVar2;
      }
    }
    fVar5 = local_44;
    fVar4 = local_48;
    fVar3 = local_4c;
    fVar2 = local_50;
    fVar1 = local_54;
    fVar9 = local_58;
    if (local_48 < local_3c) {
      local_7c = local_4c;
      local_78 = local_48;
      local_74 = local_44;
      if (&local_4c != &local_40) {
        local_4c = local_40;
        local_48 = local_3c;
        local_44 = local_38;
      }
      if (&local_40 != &local_7c) {
        local_40 = fVar3;
        local_3c = fVar4;
        local_38 = fVar5;
      }
    }
    if (local_3c <= param_2[1]) {
      if (local_54 < local_48) {
        local_64 = local_58;
        local_60 = local_54;
        local_5c = local_50;
        if (&local_58 != &local_4c) {
          local_58 = local_4c;
          local_54 = local_48;
          local_50 = local_44;
        }
        if (&local_4c != &local_64) {
          local_4c = fVar9;
          local_48 = fVar1;
          local_44 = fVar2;
        }
      }
      if (*param_4 <= local_54) {
        if (local_58 * local_58 + local_50 * local_50 < param_3 * param_3) {
          *param_4 = local_54;
          return 1;
        }
        uVar6 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0
                          (&local_58,&local_4c,param_3,param_4);
        uVar7 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0
                          (&local_4c,&local_40,param_3,param_4);
        uVar8 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0
                          (&local_40,&local_58,param_3,param_4);
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT((float)param_1[5] * (float)param_1[5] + (float)param_1[3] * (float)param_1[3]);
        if ((DAT_014b8478 & 1) == 0) {
          DAT_014b8478 = DAT_014b8478 | 1;
          _DAT_014b8470 = -100.0;
          _DAT_014b846c = 0;
          _DAT_014b8474 = 0;
        }
        if (0.01 <= (double)fVar9) {
          param_3 = param_3 / fVar9;
          local_34 = (float)param_1[3] * param_3 + *param_2;
          local_2c = param_3 * (float)param_1[5] + param_2[2];
          local_30 = param_2[1];
          fVar9 = (float)core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
                                   (param_1,&local_34,&DAT_014b846c);
          if ((0.0 <= fVar9) && (local_30 = fVar9 * _DAT_014b8470 + local_30, *param_4 < local_30))
          {
            *param_4 = local_30;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
                                   (param_1,param_2,&DAT_014b846c);
          if (0.0 <= fVar9) {
            uVar8 = 1;
            *param_4 = local_54;
          }
        }
        return uVar8;
      }
    }
  }
  return 0;
}
