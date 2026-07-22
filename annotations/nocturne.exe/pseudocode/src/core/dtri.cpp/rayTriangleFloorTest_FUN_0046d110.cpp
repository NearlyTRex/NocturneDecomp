// Name: core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
// Address: 0046d110
// Address Range: [[0046d110, 0046d4b0]]
// Convention: __cdecl
// Signature: uint __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(float *param_1,float *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(float *param_1,float *param_2,float param_3,float *param_4)

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
  
  if (param_1[10] <= (float)-0.34000000000000002) {
    fVar1 = *param_1 - *param_2;
    fVar9 = param_1[1];
    fVar2 = param_1[2] - param_2[2];
    local_58 = param_1[3] - *param_2;
    local_54 = param_1[4];
    local_50 = param_1[5] - param_2[2];
    local_70 = param_1[6] - *param_2;
    local_6c = param_1[7];
    local_68 = param_1[8] - param_2[2];
    local_4c = fVar1;
    local_48 = fVar9;
    local_44 = fVar2;
    if (fVar9 < local_54) {
      if (&local_4c != &local_58) {
        local_4c = local_58;
        local_48 = local_54;
        local_44 = local_50;
      }
      local_40 = fVar1;
      local_3c = fVar9;
      local_38 = fVar2;
      if (&local_58 != &local_40) {
        local_58 = fVar1;
        local_54 = fVar9;
        local_50 = fVar2;
      }
    }
    fVar5 = local_44;
    fVar4 = local_48;
    fVar3 = local_4c;
    fVar2 = local_50;
    fVar1 = local_54;
    fVar9 = local_58;
    if (local_54 < local_6c) {
      local_34 = local_58;
      local_30 = local_54;
      local_2c = local_50;
      if (&local_58 != &local_70) {
        local_58 = local_70;
        local_54 = local_6c;
        local_50 = local_68;
      }
      if (&local_70 != &local_34) {
        local_70 = fVar9;
        local_6c = fVar1;
        local_68 = fVar2;
      }
    }
    if (local_6c <= param_2[1]) {
      if (local_48 < local_54) {
        local_7c = local_4c;
        local_78 = local_48;
        local_74 = local_44;
        if (&local_4c != &local_58) {
          local_4c = local_58;
          local_48 = local_54;
          local_44 = local_50;
        }
        if (&local_58 != &local_7c) {
          local_58 = fVar3;
          local_54 = fVar4;
          local_50 = fVar5;
        }
      }
      if (*param_4 <= local_48) {
        if (local_4c * local_4c + local_44 * local_44 < param_3 * param_3) {
          *param_4 = local_48;
          return 1;
        }
        uVar6 = core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(&local_4c,&local_58,param_3,param_4);
        uVar7 = core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(&local_58,&local_70,param_3,param_4);
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(&local_70,&local_4c,param_3,param_4);
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(param_1[0xb] * param_1[0xb] + param_1[9] * param_1[9]);
        if ((DAT_01bc9968 & 1) == 0) {
          DAT_01bc9968 = DAT_01bc9968 | 1;
          _DAT_01bc9960 = -100.0;
          _DAT_01bc995c = 0;
          _DAT_01bc9964 = 0;
        }
        if (0.01 <= (double)fVar9) {
          param_3 = param_3 / fVar9;
          local_64 = param_1[9] * param_3 + *param_2;
          local_5c = param_3 * param_1[0xb] + param_2[2];
          local_60 = param_2[1];
          fVar9 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                   (param_1,&local_64,&DAT_01bc995c);
          if ((0.0 <= fVar9) && (local_60 = fVar9 * _DAT_01bc9960 + local_60, *param_4 < local_60))
          {
            *param_4 = local_60;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                   (param_1,param_2,&DAT_01bc995c);
          if (0.0 <= fVar9) {
            uVar8 = 1;
            *param_4 = local_48;
          }
        }
        return uVar8;
      }
    }
  }
  return 0;
}
